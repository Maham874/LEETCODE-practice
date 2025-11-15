#include <stdio.h>

void moveZeroes(int* nums, int numsSize) {
    int index = 0;  // Pointer for placing non-zero elements

    // Step 1: Move all non-zero values to the front
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[index] = nums[i];
            index++;
        }
    }

    // Step 2: Fill the remaining array positions with 0
    while (index < numsSize) {
        nums[index] = 0;
        index++;
    }
}

int main() {
    int nums[] = {0, 1, 0, 3, 12};
    int size = sizeof(nums) / sizeof(nums[0]);

    moveZeroes(nums, size);

    printf("Output: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}
