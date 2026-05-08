// Last updated: 08/05/2026, 10:45:01
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result(2 * n);

        int i = 0;      // first half
        int j = n;      // second half
        int k = 0;      // result index

        while (i < n) {
            result[k] = nums[i];
            result[k + 1] = nums[j];
            i++;
            j++;
            k += 2;
        }

        return result;
    }
};
