// Last updated: 08/05/2026, 10:47:40
class Solution {
public:

    vector<string> res;

    bool isValid(string str){
        int cnt = 0;
        for(char ch : str){
            if(ch == '('){
                cnt++;
            } else {
                cnt--;
            }
            if(cnt < 0){
                return false;
            }
        }
        return cnt == 0;   // ✅ fixed
    }

    void solve(string &curr , int n){
        if(curr.length() == 2*n){
            if(isValid(curr)){   // ✅ fixed bracket
                res.push_back(curr);
            }
            return;   // ✅ fixed
        }

        curr.push_back('(');
        solve(curr,n);
        curr.pop_back();

        curr.push_back(')');
        solve(curr,n);
        curr.pop_back();
    }

    vector<string> generateParenthesis(int n) {
        string curr = "";
        solve(curr,n);   // ✅ fixed
        return res;
    }
};