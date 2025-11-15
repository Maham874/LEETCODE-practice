#include <stdio.h>
//example 2
int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0)
        return 0;

    int i = 0; // slow pointer

    for (int j = 1; j < numsSize; j++) {
        if (nums[j] != nums[i]) {  // new unique element
            i++;
            nums[i] = nums[j];
        }
    }

    return i + 1;  // count of unique elements
}

int main() {
    int nums[] = {0,0,1,1,1,2,2,3,3,4};     // <-- Your example
    int size = sizeof(nums) / sizeof(nums[0]);

    int k = removeDuplicates(nums, size);

    printf("k = %d\n", k);
    printf("Array after removing duplicates: ");

    for (int i = 0; i < k; i++) {
        printf("%d ", nums[i]);
    }

    printf("\n");

    return 0;
}
