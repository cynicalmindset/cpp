// Last updated: 08/05/2026, 10:47:24
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = nums[0];
        int res = nums[0];
        for(int i =1;i<nums.size();i++){
            sum = max(nums[i],nums[i]+sum);
            if(sum>res) res = sum;
        }
        return res;
        
    }
};