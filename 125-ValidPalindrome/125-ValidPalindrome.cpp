// Last updated: 08/05/2026, 10:47:04
class Solution {
public:
    bool isPalindrome(string s) {

        int k = 0;
        int e = s.size() -1 ;
        while(k<=e){
           while(k<e && !isalnum(s[k])){
            k++;
           }
           while(k<e && !isalnum(s[e])){
            e--;
           }

           if(tolower(s[k])!=tolower(s[e])){
            return 0;
           }
           k++;
           e--;
        } 

        return 1;       
    }
};