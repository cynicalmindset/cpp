// Last updated: 08/05/2026, 10:47:34
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int gola = -1;
        for(int i = n-1 ; i>0 ;i--){
            if(nums[i]>nums[i-1]){
                gola = i-1;
                break;
            }       
        }
        if(gola != -1){
            int swap_ind = gola;
            for(int j = n-1 ; j > gola ; j--)
{
                if(nums[j]>nums[gola]){
                    swap_ind = j;
                    break;
                }
            }
            swap(nums[gola], nums[swap_ind]);
        }
        
        reverse(nums.begin() + gola + 1, nums.end());
    }
};