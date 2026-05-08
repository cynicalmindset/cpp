// Last updated: 08/05/2026, 10:46:15
class Solution {
public:
    void reverseString(vector<char>& s) {
        int k = 0;
        int e = s.size() -1;
        while(k<e){
            swap(s[k++],s[e--]);
        }
        
    }
};