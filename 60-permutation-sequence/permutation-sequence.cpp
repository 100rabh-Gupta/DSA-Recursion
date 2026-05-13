class Solution {
public:
    string getPermutation(int n, int k) {

        vector<int> nums;
        int fact = 1;

        for (int i = 1; i < n; i++) {
            fact *= i;
            nums.push_back(i);
        }
        nums.push_back(n);

        k = k - 1;
        string ans = "";

        for (int i = n - 1; i >= 0; i--) {

            int index = k / fact;
            ans += to_string(nums[index]);
            nums.erase(nums.begin() + index);

            if (i != 0)
                k %= fact;

            if (i != 0)
                fact /= i;
        }

        return ans;
    }
};