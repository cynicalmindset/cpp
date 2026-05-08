// Last updated: 08/05/2026, 10:44:07
class Solution {
public:
    bool isIncreasing(vector<int> &nums, int s, int e){

        for(int i = s+1;i<e;i++){
            if(nums[i]<=nums[i-1]){
                return false;
            }
        }
        return true;
    }
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
      int n = nums.size();
      for(int start = 0; start + 2*k<=n;start++){
        bool fisrt = isIncreasing(nums,start,start+k);
        bool second = isIncreasing(nums,start+k,start+2*k);
        if(fisrt && second){
            return true;
        }
      } 
      return false; 
    }
};