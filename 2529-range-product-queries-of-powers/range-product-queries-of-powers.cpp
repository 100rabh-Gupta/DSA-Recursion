class Solution {
public:
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        const int MOD = 1e9 + 7;
        vector<long long> powers;


        for (int i = 0; i < 31; i++) {
            if (n & (1 << i)) {
                powers.push_back(1LL << i);
            }
        }

        vector<int> ans;

       
        for (auto &q : queries) {
            int l = q[0], r = q[1];
            long long prod = 1;

            for (int i = l; i <= r; i++) {
                prod = (prod * powers[i]) % MOD;
            }

            ans.push_back(prod);
        }

        return ans;
    }
};