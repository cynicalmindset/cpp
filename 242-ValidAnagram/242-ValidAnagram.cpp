// Last updated: 08/05/2026, 10:46:22
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(begin(s), end(s));
        sort(begin(t), end(t));

        if(s==t){
            return true;
        }
        return false;
    }
};