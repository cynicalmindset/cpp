// Last updated: 13/05/2026, 01:35:48
class Solution {
public:
    vector<vector<int>> rotateGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        int layers = min(m, n) / 2;

        for (int layer = 0; layer < layers; layer++) {
            vector<int> nums;
            int top = layer;
            int bottom = m - layer - 1;
            int left = layer;
            int right = n - layer - 1;

            // TOP row: left to right
            for (int j = left; j <= right; j++)
                nums.push_back(grid[top][j]);

            // RIGHT column: top+1 to bottom
            for (int i = top + 1; i <= bottom; i++)
                nums.push_back(grid[i][right]);

            // BOTTOM row: right-1 to left
            for (int j = right - 1; j >= left; j--)
                nums.push_back(grid[bottom][j]);

            // LEFT column: bottom-1 to top+1
            for (int i = bottom - 1; i >= top + 1; i--)
                nums.push_back(grid[i][left]);

            int len = nums.size();
            int normalized_k = k % len;
            rotate(begin(nums), begin(nums) + normalized_k, end(nums));

            int idx = 0;
            for (int j = left; j <= right; j++)
                grid[top][j] = nums[idx++];

            for (int i = top + 1; i <= bottom; i++)
                grid[i][right] = nums[idx++];

            for (int j = right - 1; j >= left; j--)
                grid[bottom][j] = nums[idx++];

            for (int i = bottom - 1; i >= top + 1; i--)
                grid[i][left] = nums[idx++];
        }

        return grid;
    }
};