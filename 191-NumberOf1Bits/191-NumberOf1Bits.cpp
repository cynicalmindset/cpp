// Last updated: 08/05/2026, 10:46:42
class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        while(n!=0){
            if(n&1){
              count++;
            }
            n = n>>1;
        }
        return count;
        
    }
};