#include <stdio.h>

int main() {
    int nums[] = {4, 3, 2, 1};
    int size = sizeof(nums) / sizeof(nums[0]);

    for (int i = 0; i < size; i++) {
        if (nums[i] % 2 == 0)
            nums[i] = 0;
        else
            nums[i] = 1;
    }
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }

    printf("Output: [");
    for (int i = 0; i < size; i++) {
        printf("%d", nums[i]);
        if (i < size - 1)
            printf(", ");
    }
    printf("]\n");

    return 0;
}
