// Last updated: 08/05/2026, 10:46:45
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candi = 0;
        int count =0 ;
        for(int x:nums){
            if(count==0){
                candi = x;
            }
            if(x==candi){
                count++;
            }
            else{
                count--;
            }
        }
        return candi;
    }
};