// Last updated: 08/05/2026, 10:44:19
class Solution {
public:
    int countCollisions(string directions) {
        int i = 0;
        int count = 0;
        int n = directions.size();
        while(i<n && directions[i]=='L'){
           i++;
        }
        int j = n-1;
        while(j>=0 && directions[j] == 'R'){
           j--;
        }
        while(i<=j){
            if(directions[i]!='S'){ 
                count++;
            }
            i++;
        }
        return count;
    }
};