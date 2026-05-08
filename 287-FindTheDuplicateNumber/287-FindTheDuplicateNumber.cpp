// Last updated: 08/05/2026, 10:46:18
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int step = 0;
        int slow = nums[0];
        int fast = nums[0];
        
        slow = nums[slow];
        fast = nums[nums[fast]];

        
        while(slow!=fast){
            slow = nums[slow];
            fast = nums[nums[fast]];
        }




        slow = nums[0];
        while(slow!=fast){
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow;

    }
};