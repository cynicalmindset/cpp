// Last updated: 08/05/2026, 10:47:32
class Solution {
public:

   int findfirst(vector<int>& nums, int target){
    int s = 0 , e = nums.size() - 1;
    int ans = -1;
    while(s<=e){
        int m = s+(e-s)/2;
        if(nums[m]==target){
           ans = m;
           e = m - 1;
        }
        else if(nums[m]<target){
            s = m+1;
        }
        else{
            e = m - 1;
        }
    }
    return ans;
   }




   int findlast(vector<int>& nums , int target){
    int start = 0 , end = nums.size() - 1;
    int ans = -1;
    while(start<=end){
        int mid = start + (end - start)/2;
        if(nums[mid]==target){
            ans = mid;
            start = mid + 1;
        }
        else if(nums[mid]<target){
            start = mid + 1;

        }
        else{
            end = mid - 1;
        }
    }
    return ans;
   }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = findfirst(nums , target);
        int last = findlast(nums,target);
        return {first , last};
        
    }
};