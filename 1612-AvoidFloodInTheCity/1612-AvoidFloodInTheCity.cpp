// Last updated: 08/05/2026, 10:44:56
class Solution {
public:
    vector<int> avoidFlood(vector<int>& rains) {
        int n = rains.size();
        vector<int> ans(n, 1);
        unordered_map<int, int> full;  // lake -> last day it was full
        set<int> dry;  // indices of dry days

        for (int i = 0; i < n; i++) {
            if (rains[i] == 0) {
                // we can dry a lake on this day
                dry.insert(i);
            } else {
                int lake = rains[i];

                // if the lake was already full earlier
                if (full.find(lake) != full.end()) {
                    // find the next dry day after the previous rain of this lake
                    auto it = dry.upper_bound(full[lake]);
                    if (it == dry.end()) {
                        // no dry day available to prevent flood
                        return {};
                    }
                    // dry this lake on that day
                    ans[*it] = lake;
                    dry.erase(it);
                }

                // mark this lake as full on this day
                full[lake] = i;
                ans[i] = -1; // raining day
            }
        }

        return ans;
    }
};
