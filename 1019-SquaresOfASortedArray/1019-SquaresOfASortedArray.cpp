// Last updated: 08/05/2026, 10:45:33
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size());
        int l = 0;
        int r = nums.size() - 1;
        int p = nums.size() - 1;

        while(l<=r){
            if(abs(nums[l])>abs(nums[r])){
                ans[p] = abs(nums[l])*abs(nums[l]);
                l++;
            }

            else{
                ans[p] = abs(nums[r])*abs(nums[r]);
                r--;
            }

            p--;
        }
        return ans;
    }
};