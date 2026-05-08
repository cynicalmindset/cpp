// Last updated: 08/05/2026, 10:43:56
class Solution {
public:
    long long rob(vector<int>& nums, vector<int>& colors) {
        int n = nums.size();
        if(n==0) return 0;
        if(n==1) return nums[0];

        vector<long long> dp(n);
        dp[0] = nums[0];

        for(int i = 1;i<n;i++){
            if(colors[i]==colors[i-1]){
                long long take = nums[i];
                if(i>=2)
                    take += dp[i-2];
                dp[i] = max(dp[i-1], take);
            }
            else{
                dp[i] = dp[i-1]+nums[i];
            }
        }
        return dp[n-1];
    }
};