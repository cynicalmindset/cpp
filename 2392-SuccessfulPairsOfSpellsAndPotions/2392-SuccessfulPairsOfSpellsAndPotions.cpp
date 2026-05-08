// Last updated: 08/05/2026, 10:44:16
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int bs(long long x, const vector<int>& potions, long long success) {
        int n = potions.size();
        int l = 0, h = n - 1;
        while (l <= h) {
            int mid = l + (h - l) / 2;
            long long product = 1LL * x * potions[mid];
            if (product >= success) {
                h = mid - 1; // go left
            } else {
                l = mid + 1; // go right
            }
        }
        return l; // first index where product >= success
    }

    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n = potions.size();
        int m = spells.size();
        sort(potions.begin(), potions.end());

        vector<int> ans(m);

        for (int i = 0; i < m; i++) {
            long long x = spells[i];
            int idx = bs(x, potions, success);
            ans[i] = n - idx; // number of successful pairs
        }

        return ans;
    }
};
