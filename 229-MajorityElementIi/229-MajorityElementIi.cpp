// Last updated: 08/05/2026, 10:46:33
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1 = 0, cnt2 = 0;
        int el1 = 0, el2 = 1; 


        for(int x : nums) {
            if(x == el1) cnt1++;
            else if(x == el2) cnt2++;
            else if(cnt1 == 0) {
                el1 = x;
                cnt1 = 1;
            }
            else if(cnt2 == 0) {
                el2 = x;
                cnt2 = 1;
            }
            else {
                cnt1--;
                cnt2--;
            }
        }

        cnt1 = cnt2 = 0;
        for(int x : nums) {
            if(x == el1) cnt1++;
            else if(x == el2) cnt2++;
        }

        vector<int> ans;
        int need = nums.size()/3 + 1;

        if(cnt1 >= need) ans.push_back(el1);
        if(cnt2 >= need) ans.push_back(el2);

        return ans;
    }
};
