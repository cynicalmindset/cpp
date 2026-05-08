// Last updated: 08/05/2026, 10:46:19
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        for(int j = 0;j<nums.size();j++){
            if(nums[j]!=0){
                swap(nums[j],nums[i]);
                i++;
            }
        }
    }
};