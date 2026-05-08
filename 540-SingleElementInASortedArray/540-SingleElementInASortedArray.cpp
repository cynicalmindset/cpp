// Last updated: 08/05/2026, 10:45:54
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int ans = 0;
        for(int i = 0;i<nums.size();i++){
            ans ^= nums[i];
        }
        return ans;
    }
};