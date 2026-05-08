// Last updated: 08/05/2026, 10:45:26
class Solution {
public:
    string removeOuterParentheses(string s) {
        string result = "";
        int depth = 0;

        for(char c : s) {
            if(c == '(') {
                if(depth > 0) result += c;
                depth++;
            }
            else {
                depth--;
                if(depth > 0) result += c;
            }
        }

        return result;
    }
};