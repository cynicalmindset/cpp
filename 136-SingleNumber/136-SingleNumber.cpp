// Last updated: 08/05/2026, 10:47:02
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans =0 ;
        for(int num:nums){
            ans ^= num;
        }
        return ans;
    }
};