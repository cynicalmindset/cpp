// Last updated: 08/05/2026, 10:44:28
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> result(2 * n);
        int k=0;
        while(k != n){
            result[k] = nums[k];
            k++;
        }
        for(int i =  0 ; i<n;i++){
            result[k] = nums[i];
            k++;

        }
        return result;
    }
};