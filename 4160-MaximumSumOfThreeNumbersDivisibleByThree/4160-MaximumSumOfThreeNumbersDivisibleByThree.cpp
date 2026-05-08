// Last updated: 08/05/2026, 10:43:49
class Solution {
public:
   int maximumSum(vector<int>& nums)
 {
        vector<int> m0, m1, m2;
        for (int x : nums) {
            if (x % 3 == 0) m0.push_back(x);
            else if (x % 3 == 1) m1.push_back(x);
            else m2.push_back(x);
        }
        sort(m0.rbegin(), m0.rend());
        sort(m1.rbegin(), m1.rend());
        sort(m2.rbegin(), m2.rend());
        int ans = 0;
        if (m0.size() >= 3)
            ans = max(ans, m0[0] + m0[1] + m0[2]);
        if (m1.size() >= 3)
            ans = max(ans, m1[0] + m1[1] + m1[2]);
        if (m2.size() >= 3)
            ans = max(ans, m2[0] + m2[1] + m2[2]);
        if (!m0.empty() && !m1.empty() && !m2.empty())
            ans = max(ans, m0[0] + m1[0] + m2[0]);

        return ans;
    }
};
