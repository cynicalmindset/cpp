// Last updated: 08/05/2026, 10:44:21
class Solution {
public:
    vector<int> replaceNonCoprimes(vector<int>& nums) {
         vector<int> st;

        for (int num : nums) {
            st.push_back(num);

            // keep merging while last two numbers are non-coprime
            while (st.size() > 1) {
                int a = st.back();
                int b = st[st.size() - 2];

                int g = gcd(a, b);
                if (g == 1) break; // coprime → stop merging

               
                long long lcm = 1LL * a / g * b; 
                st.pop_back();
                st.pop_back();
                st.push_back((int)lcm);
            }
        }

        return st;
    
    }
};