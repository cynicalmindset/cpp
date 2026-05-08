// Last updated: 08/05/2026, 10:45:21
class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        bool mp[26];
        for(char &ch: brokenLetters){
            mp[ch-'a'] = true; 
        }
        int r = 0;
        bool type = true;
        for(char &ch:text){
            if(ch == ' '){
                if(type){
                    r++;
                }
                type = true;
            }else if(mp[ch-'a']==true){
                type = false;
            }
        }
        if(type){
            r++;
        }
        return r;
    }
};