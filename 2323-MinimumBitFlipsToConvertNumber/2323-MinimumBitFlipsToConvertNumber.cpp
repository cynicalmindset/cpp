// Last updated: 08/05/2026, 10:44:17
class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans = start ^ goal;
        int count = 0;
        while (ans > 0) {
            if (ans & 1) count++;
            ans = ans >> 1;
        }

        
        return count;
    }
};