// Last updated: 08/05/2026, 10:45:43
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0;
        int end = arr.size() -1 ;
        while(start<end){
            int mid = start + (end - start)/2;
            if(arr[mid]<arr[mid+1]){
                start = mid +1;
            }
            else{
                end = mid;
            }
        }
      return start; 
    }
};