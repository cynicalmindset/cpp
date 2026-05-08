// Last updated: 08/05/2026, 10:44:40
class Solution {
public:
    int minOperations(string s) {

        int n = s.length();
        int pattern1 = 0;
        int pattern2 = 0;

        for(int i = 0; i < n; i++) {

            if(i % 2 == 0) {

                if(s[i] != '0') pattern1++;
                if(s[i] != '1') pattern2++;

            } 
            else {

                if(s[i] != '1') pattern1++;
                if(s[i] != '0') pattern2++;

            }

        }

        return min(pattern1, pattern2);
    }
};