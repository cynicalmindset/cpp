// Last updated: 13/05/2026, 01:35:43
class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long sum = 0;
        for(int i = 0;i<nums.size();i++){
            int longe = nums[i];
            int small = nums[i];
            for(int j = i+1 ; j<nums.size() ;j++){
                longe = max(longe,nums[j]);
                small = min(small , nums[j]);
                sum = sum + (longe-small);
            }

        }
        return sum;
    }
};