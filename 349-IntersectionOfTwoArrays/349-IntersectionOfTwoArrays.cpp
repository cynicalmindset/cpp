// Last updated: 08/05/2026, 10:46:10
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i = 0;i<nums1.size();i++){
            int element = nums1[i];


            bool already = false;
            for(int k = 0; k<ans.size();k++){
                if(element == ans[k]){
                    already = true;
                    break;
                }
            }

            if(already) continue;

            for(int j = 0 ; j<nums2.size();j++){
                if(element == nums2[j]){
                  ans.push_back(element);
                  break;
                }
                
            }
        }
        return ans;
        
    }
};