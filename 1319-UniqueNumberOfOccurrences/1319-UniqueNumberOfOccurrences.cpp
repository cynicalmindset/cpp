// Last updated: 08/05/2026, 10:45:20
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> mp;
        for(int i = 0 ; i<arr.size() ; i++){
            mp[arr[i]]++;
        }
        set<int> s;
        for(auto i:mp){
            s.insert(i.second);
        }
        return mp.size() == s.size();
    }
};