// Last updated: 08/05/2026, 10:45:57
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxcount = 0;
        int currentcount = 0;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            if(nums[i]==1){
                currentcount++;
                maxcount = max(maxcount , currentcount);
            }
            else currentcount =0;
        }
        return maxcount;
        
    }
};