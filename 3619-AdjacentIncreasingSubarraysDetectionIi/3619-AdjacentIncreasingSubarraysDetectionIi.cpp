// Last updated: 08/05/2026, 10:44:06
class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        int n = nums.size();
        int prevrun = 0;
        int currrun= 1;
        int k = 0;
        for(int i= 1;i<n;i++){
            if(nums[i]>nums[i-1]){
                currrun++;
            }else{
                prevrun = currrun;
                currrun = 1;
            }

            k = max(k,currrun/2);
            k = max(k,min(currrun, prevrun));

        }

        return k;
    }
};