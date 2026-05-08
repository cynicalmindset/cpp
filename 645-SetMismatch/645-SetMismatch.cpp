// Last updated: 08/05/2026, 10:45:48
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(2);

        // find duplicate
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] == nums[j]) {
                    ans[0] = nums[i];
                }
            }
        }

        // find missing
        for (int i = 1; i <= n; i++) {
            bool found = false;
            for (int j = 0; j < n; j++) {
                if (nums[j] == i) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                ans[1] = i;
                break;
            }
        }

        return ans;
    }
};
