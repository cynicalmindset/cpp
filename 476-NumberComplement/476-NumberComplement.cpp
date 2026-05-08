// Last updated: 08/05/2026, 10:45:58
class Solution {
public:
    int findComplement(int num) {
        int m = num;
        int mask = 0;
        while(m!=0){
            mask = (mask<<1)|1;
            m = m>>1;
        }
        return (~num) & mask;
        
    }
};