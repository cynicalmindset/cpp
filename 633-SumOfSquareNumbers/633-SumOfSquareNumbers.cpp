// Last updated: 08/05/2026, 10:45:49
class Solution {
public:
    int binary(int num){
        int start = 0;
        int end = num;
        
        while(start<=end){
            long long int mid = start + (end - start)/2;
            long long square = mid*mid;
            if(square==num){
                return true;
            }
            else if(square<num)start = mid+1;
            else end = mid-1;
        }
        return false;
    }
    bool judgeSquareSum(int c) {
         for (long long a = 0; a * a <= c; ++a) {
            int b2 = c - a * a;
            if (binary(b2)) return true;
        }
        return false;
    }
};