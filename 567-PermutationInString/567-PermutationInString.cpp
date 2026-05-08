// Last updated: 08/05/2026, 10:45:51
class Solution {
private:
    bool checkEqual(int a[26], int b[26]) {
        for (int i = 0; i < 26; i++) {
            if (a[i] != b[i]) {
                return false;
            }
        }
        return true;
    }

public:
    bool checkInclusion(string s1, string s2) {
        int count1[26] = {0};

        // store freq of s1
        for (int i = 0; i < s1.length(); i++) {
            int index = s1[i] - 'a';
            count1[index]++;
        }

        int i = 0;
        int windowSize = s1.length();
        int count2[26] = {0};

        // store freq of first window in s2
        while (i < windowSize && i < s2.length()) {
            int index = s2[i] - 'a';
            count2[index]++;
            i++;
        }

        // check for first window
        if (checkEqual(count1, count2)) return true;

        // sliding window
        while (i < s2.length()) {
            // add new char
            char newChar = s2[i];
            count2[newChar - 'a']++;

            // remove old char
            char oldChar = s2[i - windowSize];
            count2[oldChar - 'a']--;

            i++;

            if (checkEqual(count1, count2)) return true;
        }

        return false;
    }
};
