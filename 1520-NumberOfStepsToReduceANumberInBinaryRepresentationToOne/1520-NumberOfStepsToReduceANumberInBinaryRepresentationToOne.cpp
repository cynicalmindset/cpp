// Last updated: 08/05/2026, 10:45:08
class Solution {
public:
    void add(string& s){
        int i = s.length() -1;
        while(i>=0 && s[i] != '0'){
            s[i] = '0';
            i--;
        }
            if(i<0){
                s = '1' + s;
            }
            else{
                s[i] = '1';
            }
        
    }
    int numSteps(string s) {
        int op =0 ;
        
     
        while(s.length()>1){
            if(s.back()=='0'){
                s.pop_back();
               
            }
            else{
                add(s);
               
            }
            op++;
        }
        return op;
    }
};