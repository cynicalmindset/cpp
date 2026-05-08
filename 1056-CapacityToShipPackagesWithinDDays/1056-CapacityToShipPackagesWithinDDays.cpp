// Last updated: 08/05/2026, 10:45:27
class Solution {
public:

    int find(vector<int>& weights , int mid){
        int day = 1;
        int load =0 ;
        for(int i = 0 ; i<weights.size();i++){
            if(weights[i]+load>mid){
                day++;
                load = weights[i];
            }
            else{
                load += weights[i];
            }
        }
        return day;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int l = *max_element(weights.begin(), weights.end());
        int h = accumulate(weights.begin(), weights.end(),0);
        while(l<=h){
            int m = (l+h)/2;
            int day = find(weights,m);
            if(day<=days){
                h = m-1;
            }
            else{
                l = m+1;
            }          
        }
        return l;       
    }
};