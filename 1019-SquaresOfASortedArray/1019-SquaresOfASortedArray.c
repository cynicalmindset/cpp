// Last updated: 08/05/2026, 10:45:39
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
 int* result = (int*)malloc(numsSize* sizeof(int));   
 int left = 0;
 int right = numsSize-1;
 int pos = numsSize -1;
 while(left<=right){
    int L = nums[left]*nums[left];
    int R = nums[right]*nums[right];

    if(L>R){
        result[pos] = L;
        left++;
    } else{
        result[pos] = R;
        right--;
    }
    pos--;
 }
 *returnSize = numsSize;
 return result;
}