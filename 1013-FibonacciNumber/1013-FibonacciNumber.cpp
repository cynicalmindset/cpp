// Last updated: 08/05/2026, 10:45:31
class Solution {
public:
    int fib(int n) {
        if(n<=1) return n;

        return fib(n-1)+fib(n-2);
        
    }
};