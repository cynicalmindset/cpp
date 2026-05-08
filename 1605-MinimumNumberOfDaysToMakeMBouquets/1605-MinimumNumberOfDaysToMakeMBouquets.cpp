// Last updated: 08/05/2026, 10:44:58
class Solution {
public:

    int canmakeb(vector<int>& bloomDay , int mid , int k){
        int b_count = 0;
        int count = 0;

        for(int i =0 ; i<bloomDay.size() ; i++){
            if(bloomDay[i]<=mid){
                count++;
            }
            else{
                count = 0;
            }

            if(count==k){
                b_count++;
                count =0;
            }
        }
        return b_count;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        int l =0 ;
        int min = -1;
        int r = *max_element(begin(bloomDay), end(bloomDay));

        while(l<=r){
            int mid = l+(r-l)/2;

            if(canmakeb(bloomDay , mid , k)>=m){
                min = mid;
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return min;
    }
};