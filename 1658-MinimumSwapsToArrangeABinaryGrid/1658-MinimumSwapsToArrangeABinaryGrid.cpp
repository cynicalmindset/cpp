// Last updated: 08/05/2026, 10:44:52
class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> trailingZeros(n);

        // Step 1: count trailing zeros
        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int j = n - 1; j >= 0; j--) {
                if (grid[i][j] == 0) count++;
                else break;
            }
            trailingZeros[i] = count;
        }

        int swaps = 0;

        // Step 2: greedy placement
        for (int i = 0; i < n; i++) {
            int required = n - 1 - i;
            int j = i;

            // find row with enough trailing zeros
            while (j < n && trailingZeros[j] < required) {
                j++;
            }

            if (j == n) return -1; // not possible

            // bring row j up to i
            while (j > i) {
                swap(trailingZeros[j], trailingZeros[j - 1]);
                swaps++;
                j--;
            }
        }

        return swaps;
    }
};