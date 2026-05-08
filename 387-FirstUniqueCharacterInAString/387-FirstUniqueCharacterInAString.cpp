// Last updated: 08/05/2026, 10:46:07
class Solution {
public:
    int firstUniqChar(string s) {
        map<char , int>mp;
        for(char c:s){
            mp[c]++;
        }
        for(int i =0;i<s.size();i++){
            if(mp[s[i]]==1){
                return i;
            }
        }
        return -1;
    }
};