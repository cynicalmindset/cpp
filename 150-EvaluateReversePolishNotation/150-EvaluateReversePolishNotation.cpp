// Last updated: 08/05/2026, 10:46:53
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for (string &token : tokens) {

            // If token is an operator
            if (token == "+" || token == "-" || token == "*" || token == "/") {
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();

                if (token == "+") st.push(a + b);
                else if (token == "-") st.push(a - b);
                else if (token == "*") st.push(a * b);
                else st.push(a / b); // truncates toward zero
            }
            // If token is a number
            else {
                st.push(stoi(token));
            }
        }

        return st.top();
    }
};