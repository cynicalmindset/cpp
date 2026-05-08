// Last updated: 08/05/2026, 10:45:36
class Solution {
public:
    void quick(vector<int>& nums , int low, int high) {
        if(low>=high) return;
        
         int randIndex = low + rand() % (high - low + 1);
        swap(nums[randIndex], nums[high]);

        int pivot = nums[high];
        int i = low;

        for(int j=low ;j<high;j++){
            if(nums[j]<pivot){
                swap(nums[i],nums[j]);
                i++;
            }
        }
        swap(nums[i],nums[high]);
        quick(nums, low, i-1);
        quick(nums, i+1, high);
    }
     vector<int> sortArray(vector<int>& nums) {
        quick(nums, 0, nums.size()-1); 
        return nums;
    }  
};