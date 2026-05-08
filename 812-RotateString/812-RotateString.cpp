// Last updated: 08/05/2026, 10:45:45
class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.length();
        int m = goal.length();

        if(m != n){
            return false;
        }

        if(s == goal){
            return true;
        }

        for(int i = 1; i< n;i++){
            rotate(begin(s) , begin(s)+1 ,end(s));
            if(s == goal){
                return true;
            }
        }
        return false;
    }
};