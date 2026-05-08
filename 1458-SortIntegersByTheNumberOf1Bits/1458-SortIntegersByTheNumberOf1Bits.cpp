// Last updated: 08/05/2026, 10:45:12
class Solution {
public:

    int countbits (int num){
        int count = 0;
        while(num!=0){
            count += num & 1;
            num >>= 1;
        }

        return count;
    }
    vector<int> sortByBits(vector<int>& arr) {
        auto lambda = [&](int &a , int &b){
            int c_a = countbits(a);
            int c_b = countbits(b);

            if(c_a == c_b){
                return a<b;
            }

            return c_a<c_b;
        };
        sort(arr.begin(),arr.end(),lambda);
        return arr;
    }
};