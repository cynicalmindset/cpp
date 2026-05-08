// Last updated: 08/05/2026, 10:43:42
class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        set<int> onBulbs;
        for(int bulb:bulbs){
            if(onBulbs.count(bulb)){
                onBulbs.erase(bulb);
            }
            else{
                onBulbs.insert(bulb);
            }
        }
        vector<int> result;
        for(int bulb:onBulbs){
            result.push_back(bulb);
        }
        return result;
    }
};