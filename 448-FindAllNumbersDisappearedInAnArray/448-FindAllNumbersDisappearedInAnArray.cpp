// Last updated: 08/05/2026, 10:46:00
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            int index = abs(nums[i])-1;
            nums[index] = -abs(nums[index]);
        }


        for(int i = 0;i<n;i++){
            if(nums[i]>0){
                result.push_back(i+1);
            }
        }
        return result;
    }
};