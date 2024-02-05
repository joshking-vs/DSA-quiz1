#include <stdio.h>
#include <stdlib.h>

int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0)
        return 0;

    int unique_index = 0;
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] != nums[unique_index]) {
            unique_index++;
            nums[unique_index] = nums[i];
        }
    }
    return unique_index + 1;
}

int main() {
    int nums[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int length = removeDuplicates(nums, numsSize);
    printf("New length: %d\n", length);
    printf("Updated array: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}
