class Solution {
public:
string countDigits(int n) {
        string cnt(10, '0');

        while (n > 0) {
            cnt[n % 10]++;
            n /= 10;
        }

        return cnt;
    }

    bool reorderedPowerOf2(int n) { string target = countDigits(n);

        for (int i = 1; i <= 1e9; i <<= 1) {
            if (countDigits(i) == target) {
                return true;
            }
        }

        return false;
        

    }
};