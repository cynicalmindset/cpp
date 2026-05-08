// Last updated: 08/05/2026, 10:47:56
class Solution {
public:
    int reverse(int x) {
        int reversed = 0;

        while (x != 0) {
            int ld = x % 10;
            x = x / 10;

            if (reversed > INT_MAX/10 || (reversed == INT_MAX/10 && ld > 7))
                return 0;
            if (reversed < INT_MIN/10 || (reversed == INT_MIN/10 && ld < -8))
                return 0;

            reversed = reversed * 10 + ld;
        }

        return reversed;
    }
};
