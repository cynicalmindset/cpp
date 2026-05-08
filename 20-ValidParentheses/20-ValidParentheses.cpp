// Last updated: 09/05/2026, 00:22:19
class Solution {
public:
  bool isValid(string s) {
        
    stack<char> st;
    for(char &ch : s){
      if(st.empty() || ch == '(' || ch == '[' || ch == '{'){
        st.push(ch);
        continue;
      }
      if(ch == ')'){
        if(st.top() == '('){
          st.pop();
          
        }else{
          return false;
        } 
      }


      if(ch == ']'){
        if(st.top () == '['){
          st.pop();
          
        }else{
          return false;
        } 
      }

if(ch == '}'){
        if(st.top() == '{'){
          st.pop();
          
        }else{
          return false;
        } 
      }
    }
    return st.empty();
    }
};
