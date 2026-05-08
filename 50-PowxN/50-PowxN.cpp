// Last updated: 08/05/2026, 10:47:26
class Solution {
public:
    double myPow(double x, int n) {
        double res = 1.0;
        long long N = n;

        if (N == 0) {
            return 1.0;
        }

        else if (N < 0) {
            x = 1.0 / x; 
            N = -N;
        }
        while (N > 0) {
            if (N % 2 == 1) {
                res = res * x;
            }
            x = x * x;
            N = N / 2;
        }

        return res;
    }
};