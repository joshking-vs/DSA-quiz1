#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdbool.h>

bool containsDuplicate(int* nums, int numsSize) {

    //  creating an array to mark the presence of each element
    bool seen[100000] = {false};

    for (int i = 0; i < numsSize; i++) {
        if (seen[nums[i] + 50000]) {
            // If we've already seen this number
            return true;
        }
        seen[nums[i] + 50000] = true; // Mark presence of this number
    }

    return false;
}

int main() {
    int nums1[] = {1, 2, 3, 4, 5};
    int numsSize1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("Array contains duplicates: %s\n", containsDuplicate(nums1, numsSize1) ? "true" : "false");

    int nums2[] = {1, 2, 3, 4, 1};
    int numsSize2 = sizeof(nums2) / sizeof(nums2[0]);
    printf("Array contains duplicates: %s\n", containsDuplicate(nums2, numsSize2) ? "true" : "false");

    return 0;
}

