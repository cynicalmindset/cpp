// Last updated: 08/05/2026, 10:47:47
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string pre = strs[0];
        for(int i= 0; i<strs.size();i++){
            while(strs[i].find(pre) != 0){
                pre = pre.substr(0, pre.length() -1);
                if(pre == "") return "";
            }
        }
        return pre;
    }
};