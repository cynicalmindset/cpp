// Last updated: 08/05/2026, 10:45:40
class Solution {
public:

    bool caneatall(vector<int>& piles , int mid , int h){
        int hr = 0;
        for(int &x :piles){
            hr += x/mid;
            if(x%mid != 0){
                hr++;
            }
        }

        return hr <= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int l = 1;
        int r = *max_element(begin(piles),end(piles));

        while(l<r){
            int mid = l+(r-l)/2;
            if(caneatall(piles , mid ,h)){
                r = mid;
            }
            else{
                l = mid+1;
            }
        }
        return l;
    }
};