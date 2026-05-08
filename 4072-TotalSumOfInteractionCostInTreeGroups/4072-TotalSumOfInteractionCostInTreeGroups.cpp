// Last updated: 08/05/2026, 10:43:54
class Solution {
public:
    vector<vector<int>> adj;
    vector<int> group;
    unordered_map<int,int> total;
    long long ans = 0;

    unordered_map<int,int> dfs(int u, int parent) {
        unordered_map<int,int> cur;
        cur[group[u]] = 1;

        for (int v : adj[u]) {
            if (v == parent) continue;

            auto child = dfs(v, u);

            // ---- EDGE CONTRIBUTION (counted ONCE) ----
            for (auto &[g, cnt] : child) {
                ans += 1LL * cnt * (total[g] - cnt);
            }

            // ---- MERGE MAPS ----
            if (child.size() > cur.size())
                swap(child, cur);

            for (auto &[g, cnt] : child) {
                cur[g] += cnt;
            }
        }
        return cur;
    }

    long long interactionCosts(int n, vector<vector<int>>& edges, vector<int>& grp) {
        group = grp;
        adj.assign(n, {});
        total.clear();
        ans = 0;

        for (auto &e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        for (int g : group) total[g]++;

        dfs(0, -1);
        return ans;
    }
};
