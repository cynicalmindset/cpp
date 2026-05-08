// Last updated: 08/05/2026, 10:44:43
class Solution {
public:
    int minPartitions(string n) {
        char maxCh = *max_element(begin(n),end(n));
        return maxCh-'0';
    }
    
};