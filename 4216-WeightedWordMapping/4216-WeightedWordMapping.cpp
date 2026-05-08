// Last updated: 08/05/2026, 10:43:45
class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {

        string res = "";
        for(string word:words){
            int total = 0;
            for(char c:word){
                total += weights[c-'a'];
            }

            int mod = total % 26;
            char mapped = 'z' - mod;
            res.push_back(mapped);
        }
        return res;
        
    }
};