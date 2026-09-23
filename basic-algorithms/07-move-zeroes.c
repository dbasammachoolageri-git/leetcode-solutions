#include <stdio.h>

void moveZeroes(int nums[], int size) {
    int position = 0;

    // Move all non-zero elements to the front
    for (int i = 0; i < size; i++) {
        if (nums[i] != 0) {
            nums[position] = nums[i];
            position++;
        }
    }

    // Fill the remaining positions with zeroes
    while (position < size) {
        nums[position] = 0;
        position++;
    }
}

void printArray(int nums[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
}

int main() {
    // Test Case 1: Typical case
    int nums1[] = {0, 1, 0, 3, 12};
    moveZeroes(nums1, 5);

    printf("Test Case 1: ");
    printArray(nums1, 5);

    // Test Case 2: All zeroes
    int nums2[] = {0, 0, 0};
    moveZeroes(nums2, 3);

    printf("Test Case 2: ");
    printArray(nums2, 3);

    return 0;
}