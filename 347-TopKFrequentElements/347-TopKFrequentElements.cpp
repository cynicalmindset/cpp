// Last updated: 08/05/2026, 10:46:12
class Solution {
    public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int> mp;
        for(int n:nums){
            mp[n]++;
        }
        vector<pair<int , int>> arr;
        for(auto it:mp){
            arr.push_back({it.second,it.first});
        }
        sort(arr.rbegin(),arr.rend());
        vector<int> ans;
        for(int i = 0;i<k;i++){
            ans.push_back(arr[i].second);
        }
        return ans;
    }
};