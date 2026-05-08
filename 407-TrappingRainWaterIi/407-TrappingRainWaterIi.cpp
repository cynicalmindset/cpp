// Last updated: 08/05/2026, 10:46:06
class Solution {
public:
    typedef pair<int, pair<int,int>> PP; // {height, {row, col}}

    int trapRainWater(vector<vector<int>>& heightMap) {
        if(heightMap.empty() || heightMap[0].empty()) return 0;

        int m = heightMap.size();
        int n = heightMap[0].size();

        // Min-heap to process the lowest boundary cell first
        priority_queue<PP, vector<PP>, greater<PP>> boundaryCells;
        vector<vector<bool>> visited(m, vector<bool>(n, false));

        // Push all boundary cells into the heap
        for(int i = 0; i < m; i++) {
            boundaryCells.push({heightMap[i][0], {i, 0}});
            boundaryCells.push({heightMap[i][n-1], {i, n-1}});
            visited[i][0] = visited[i][n-1] = true;
        }

        for(int j = 1; j < n-1; j++) {
            boundaryCells.push({heightMap[0][j], {0, j}});
            boundaryCells.push({heightMap[m-1][j], {m-1, j}});
            visited[0][j] = visited[m-1][j] = true;
        }

        int waterTrapped = 0;
        vector<int> dirs = {-1, 0, 1, 0, -1}; // for 4 directions

        while(!boundaryCells.empty()) {
            auto cell = boundaryCells.top(); boundaryCells.pop();
            int height = cell.first;
            int row = cell.second.first;
            int col = cell.second.second;

            // Visit all 4 neighbors
            for(int k = 0; k < 4; k++) {
                int newRow = row + dirs[k];
                int newCol = col + dirs[k+1];

                if(newRow >= 0 && newRow < m && newCol >= 0 && newCol < n && !visited[newRow][newCol]) {
                    visited[newRow][newCol] = true;
                    // Water trapped at neighbor = max(0, current boundary height - neighbor height)
                    waterTrapped += max(0, height - heightMap[newRow][newCol]);
                    // Push neighbor with the max height (to maintain boundary height)
                    boundaryCells.push({max(heightMap[newRow][newCol], height), {newRow, newCol}});
                }
            }
        }

        return waterTrapped;
    }
};