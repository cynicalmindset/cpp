// Last updated: 08/05/2026, 10:46:56
#include <math.h>

int maxProduct(int* nums, int numsSize) {
    int curMax = nums[0];
    int curMin = nums[0];
    int result = nums[0];

    for (int i = 1; i < numsSize; i++) {
        int temp = curMax; // store old max before updating

        curMax = fmax(nums[i], fmax(nums[i] * curMax, nums[i] * curMin));
        curMin = fmin(nums[i], fmin(nums[i] * temp, nums[i] * curMin));

        result = fmax(result, curMax);
    }

    return result;
}
