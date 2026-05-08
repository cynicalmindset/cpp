// Last updated: 08/05/2026, 10:45:14
class Solution {
public:
    long sum(vector<int>& nums , int mid){
        int sum =0;
        int n = nums.size();
        for(int i =0 ;i<n;i++){
            sum = sum+ ceil((double)(nums[i])/(double)(mid));
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int ans = -1;
        int l = 1;
        int h = *max_element(nums.begin(),nums.end());

        while(l<=h){
            int mid = (l+h)/2;
            
            if(sum(nums,mid)<=threshold){
                ans=mid;
                h = mid-1;
            }else{
                l=mid+1;
            }
        }
        return ans;
    }
};