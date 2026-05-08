// Last updated: 08/05/2026, 10:45:56
class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum = 0;
        int dup = num;
        for(int i = 1 ; i < num; i++){
            if(num%i==0){
                sum = sum+i;
            }
        }
        if(dup == sum){
            return true;
        }
        else{
            return false;
        }
    }
};