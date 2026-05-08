// Last updated: 08/05/2026, 10:47:54
class Solution {
public:
    int myAtoi(string s) {
        int i = 0, n = s.length();

        
        while (i < n && isspace(s[i])) {
            i++;
        }

        
        int sign = 1;
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-') sign = -1;
            i++;
        }

        
        long value = 0;

        while (i < n && isdigit(s[i])) {
            int digit = s[i] - '0';

            
            if (value > (INT_MAX - digit) / 10) {
                return sign == 1 ? INT_MAX : INT_MIN;
            }

            value = value * 10 + digit;
            i++;
        }

        return sign * value;
    }
};