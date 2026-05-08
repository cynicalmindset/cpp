// Last updated: 08/05/2026, 10:46:09
class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num<2){
            return true;
        }

        int start = 1;
        int end = num;
        while(start<=end){
            long long int mid = start + (end - start)/2;
            long long int square = mid*mid;
            if(square==num){
                return true;
            }
            else if(square<num){
                start = mid + 1;
            }
            else{
                end = mid -1;
            }
        }
        return false;
    }
};