// Last updated: 08/05/2026, 10:45:18
class Solution {
public:


    bool anafram(string &s1, string &s2){
        int arr[26] = {0};
        for(char &ch : s1){
            arr[ch-'a']++;
        }
        for(char &ch : s2){
            arr[ch-'a']--;
        }
        for(int i = 0;i<26;i++){
            if(arr[i]!=0)
                return false;
            
        }
        return true;

    }
    vector<string> removeAnagrams(vector<string>& words) {
        int n = words.size();
        vector<string> results;
        results.push_back(words[0]);
        for(int i= 1;i<n;i++){
            if(!anafram(words[i],results.back())){
                results.push_back(words[i]);
            }
        }
        return results;
    }
};