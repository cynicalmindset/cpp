// Last updated: 08/05/2026, 10:45:07
class Solution {
public:
    int numOfWays(int n) {
        const int MOD = 1e9 + 7;

        long long dpA = 6; // ABA
        long long dpB = 6; // ABC

        for (int i = 2; i <= n; i++) {
            long long newA = (dpA * 3 + dpB * 2) % MOD;
            long long newB = (dpA * 2 + dpB * 2) % MOD;

            dpA = newA;
            dpB = newB;
        }

        return (dpA + dpB) % MOD;
    }
};