// Last updated: 08/05/2026, 10:46:20
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<int> expected;
        int n = nums.size();
        int ans = 0;
        
        for(int i = 0;i<=n;i++){
            ans ^= i;
            }

            for(int i = 0;i<n;i++){
                ans ^= nums[i];
            }
return ans;
        }
        
        
         


        
    };
