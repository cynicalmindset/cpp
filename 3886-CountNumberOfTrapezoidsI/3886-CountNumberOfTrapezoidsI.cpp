// Last updated: 08/05/2026, 10:44:01
class Solution {
public:
    const long long M = 1000000007;

    int countTrapezoids(vector<vector<int>>& points) {
        map<int, long long> mp;    // sorted by y automatically

        for (auto &p : points) {
            mp[p[1]]++;
        }

        long long result = 0;
        long long previous = 0;

        for (auto &it : mp) {
            long long c = it.second;

            long long lines = (c * (c - 1) / 2) % M;  // ways to make parallel lines at this y

            result = (result + (lines * previous) % M) % M;

            previous = (previous + lines) % M;
        }

        return result;
    }
};
