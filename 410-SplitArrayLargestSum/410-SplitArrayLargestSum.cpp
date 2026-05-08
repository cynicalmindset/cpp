// Last updated: 08/05/2026, 10:46:04
class Solution {
public:

int count(vector<int> &nums , int pages){
    int stud = 1;
    long long page = 0;

    for(int i = 0; i < nums.size(); i++){
        if(page + nums[i] <= pages){
            page += nums[i];
        }else{
            stud++;
            page = nums[i];
        }
    }

    return stud;
}

int splitArray(vector<int>& nums, int k) {

    int n = nums.size();
    if(k > n) return -1;

    int low = *max_element(nums.begin(), nums.end());
    int high = accumulate(nums.begin(), nums.end(), 0);

    while(low <= high){
        int mid = (low + high) / 2;

        int stud = count(nums, mid);

        if(stud > k){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }

    return low;
}
};