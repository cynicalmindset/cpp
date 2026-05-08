// Last updated: 08/05/2026, 10:47:33
class Solution {
public:
    // Function to find the pivot (smallest element index)
    int getpivot(vector<int>& nums) {
        int s = 0;
        int e = nums.size() - 1;
        while (s < e) {
            int m = s + (e - s) / 2;
            if (nums[m] >= nums[0]) {
                s = m + 1;
            } else {
                e = m;
            }
        }
        return s; // Pivot index
    }

    // Binary search function
    int binarysearch(vector<int>& nums, int s, int e, int target) {
        int start = s;
        int end = e;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (target > nums[mid]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return -1;
    }

    // Main function to search in rotated sorted array
    int search(vector<int>& nums, int target) {
        int pivot = getpivot(nums);

        // If array is not rotated
        if (pivot == 0) {
            return binarysearch(nums, 0, nums.size() - 1, target);
        }

        if (target >= nums[pivot] && target <= nums[nums.size() - 1]) {
            return binarysearch(nums, pivot, nums.size() - 1, target);
        } else {
            return binarysearch(nums, 0, pivot - 1, target);
        }
    }
};
