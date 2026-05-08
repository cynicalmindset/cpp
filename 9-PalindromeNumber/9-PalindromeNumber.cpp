// Last updated: 08/05/2026, 10:47:53
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long reverse = 0;
        int dup = x;
        while(x!=0){
            long ld = x%10;
            reverse = (reverse*10)+ld;
            x = x/10;

        }

        return dup == reverse;
        
    }
};