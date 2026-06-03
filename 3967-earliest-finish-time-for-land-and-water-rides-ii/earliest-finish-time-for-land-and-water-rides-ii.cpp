class Solution {
public:

    long long solve(vector<int>& firstStart,
                    vector<int>& firstDur,
                    vector<int>& secondStart,
                    vector<int>& secondDur) {

        int m = secondStart.size();

        vector<pair<int,int>> rides;

        for(int i = 0; i < m; i++) {
            rides.push_back({secondStart[i], secondDur[i]});
        }

        sort(rides.begin(), rides.end());

        vector<int> starts(m);

        for(int i = 0; i < m; i++) {
            starts[i] = rides[i].first;
        }

        vector<long long> pref(m), suff(m);

        pref[0] = rides[0].second;

        for(int i = 1; i < m; i++) {
            pref[i] = min(pref[i - 1], (long long)rides[i].second);
        }

        suff[m - 1] = (long long)rides[m - 1].first + rides[m - 1].second;

        for(int i = m - 2; i >= 0; i--) {
            suff[i] = min(suff[i + 1],
                          (long long)rides[i].first + rides[i].second);
        }

        long long ans = LLONG_MAX;

        for(int i = 0; i < firstStart.size(); i++) {

            long long finishFirst =
                (long long)firstStart[i] + firstDur[i];

            int pos =
                upper_bound(starts.begin(), starts.end(), finishFirst)
                - starts.begin() - 1;

            if(pos >= 0) {
                ans = min(ans, finishFirst + pref[pos]);
            }

            if(pos + 1 < m) {
                ans = min(ans, suff[pos + 1]);
            }
        }

        return ans;
    }

    int earliestFinishTime(vector<int>& landStartTime,
                           vector<int>& landDuration,
                           vector<int>& waterStartTime,
                           vector<int>& waterDuration) {

        long long ans1 =
            solve(landStartTime, landDuration,
                  waterStartTime, waterDuration);

        long long ans2 =
            solve(waterStartTime, waterDuration,
                  landStartTime, landDuration);

        return (int)min(ans1, ans2);
    }
};