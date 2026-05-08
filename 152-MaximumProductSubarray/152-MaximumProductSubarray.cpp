// Last updated: 08/05/2026, 10:46:50
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pre =1 ;
        int suff = 1;
        int ans = INT_MIN;
        int n = nums.size();
        //vector<int> ans;
        //int prod;
        for(int i = 0; i< n;i++){
            //ans.push_back(nums[i]*nums[i+1]);
            if(pre ==0 ) pre = 1;
            if (suff == 0) suff = 1;

            pre = pre*nums[i];
            suff = suff*nums[n-i-1];
            ans = max(ans,max(pre,suff));
        }
        return ans;

    }
};