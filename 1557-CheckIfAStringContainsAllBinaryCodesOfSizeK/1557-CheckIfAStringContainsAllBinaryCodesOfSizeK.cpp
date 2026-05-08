// Last updated: 08/05/2026, 10:45:02
class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int total = pow(2,k);
        if(k>s.length()) return false;
       /// int n = s.lenght();
        unordered_set<string> seen;
        for(int i =0 ; i <= s.length()-k ; i++){
                string sub = s.substr(i,k);
                seen.insert(sub);


                if(seen.size()==total){
                    return true;
                }
        }
        return false;

        
    }
};