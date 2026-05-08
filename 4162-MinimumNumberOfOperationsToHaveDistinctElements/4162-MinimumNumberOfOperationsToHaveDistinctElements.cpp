// Last updated: 08/05/2026, 10:43:48
class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_set<int> seen;
        int n = nums.size();
        int i = n - 1;

        // Move from right to left until duplicate appears
        while (i >= 0) {
            if (seen.count(nums[i])) {
                break;
            }
            seen.insert(nums[i]);
            i--;
        }

        // Elements before index (i) must be removed
        int elementsToRemove = i + 1;

        // Each operation removes 3 elements
        return (elementsToRemove + 2) / 3; // ceil division
    }
};
