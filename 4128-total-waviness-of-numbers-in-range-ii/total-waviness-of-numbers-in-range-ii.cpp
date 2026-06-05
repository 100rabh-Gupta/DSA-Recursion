class Solution {
public:









 struct State {
        long long cnt;
        long long wav;
    };

    string s;
    State dp[16][11][11][2];
    bool vis[16][11][11][2];

    State dfs(int pos, int last1, int last2, bool started, bool tight) {
        if (pos == s.size()) {
            return {1, 0};
        }

        if (!tight && vis[pos][last1][last2][started]) {
            return dp[pos][last1][last2][started];
        }

        int limit = tight ? s[pos] - '0' : 9;

        State res = {0, 0};

        for (int dig = 0; dig <= limit; dig++) {
            bool newTight = tight && (dig == limit);

            if (!started && dig == 0) {
                State nxt = dfs(pos + 1, 10, 10, false, newTight);

                res.cnt += nxt.cnt;
                res.wav += nxt.wav;
            }
            else {
                int p2 = last2;
                int p1 = last1;

                int add = 0;

                if (started && p2 != 10) {
                    if ((p1 > p2 && p1 > dig) ||
                        (p1 < p2 && p1 < dig)) {
                        add = 1;
                    }
                }

                State nxt;

                if (!started) {
                    nxt = dfs(pos + 1, dig, 10, true, newTight);
                } else {
                    nxt = dfs(pos + 1, dig, p1, true, newTight);
                }

                res.cnt += nxt.cnt;
                res.wav += nxt.wav + 1LL * add * nxt.cnt;
            }
        }

        if (!tight) {
            vis[pos][last1][last2][started] = true;
            dp[pos][last1][last2][started] = res;
        }

        return res;
    }

    long long solve(long long x) {
        if (x < 0) return 0;

        s = to_string(x);
        memset(vis, 0, sizeof(vis));

        return dfs(0, 10, 10, false, true).wav;
    }

    long long totalWaviness(long long num1, long long num2) {
        return solve(num2) - solve(num1 - 1);
    }
};