// Last updated: 08/05/2026, 10:43:51
class Solution {
public:
    long long minCost(string s, vector<int>& cost) {
        int n = s.size();
        long long ans = LLONG_MAX;

        // try keeping each character
        for (char keep = 'a'; keep <= 'z'; keep++) {
            long long delcost = 0;

            // calculate deletion cost
            for (int i = 0; i < n; i++) {
                if (s[i] != keep) {
                    delcost += cost[i];
                }
            }

            ans = min(ans, delcost);
        }

        return ans;
    }
};
