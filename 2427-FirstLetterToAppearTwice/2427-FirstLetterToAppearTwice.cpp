// Last updated: 08/05/2026, 10:44:14
class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_set<char>seen;
        for(char c:s){
            if(seen.count(c)){
                return c;
            }
            seen.insert(c);
        }
        return -1;
    }
};