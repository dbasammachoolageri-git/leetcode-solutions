#include <stdio.h>

void reverseString(char s[], int sSize) {
    int left = 0;
    int right = sSize - 1;

    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

int main() {
    // Test Case 1: Typical case
    char s1[] = "hello";
    reverseString(s1, 5);
    printf("Test Case 1: %s\n", s1);

    // Test Case 2: Single character
    char s2[] = "a";
    reverseString(s2, 1);
    printf("Test Case 2: %s\n", s2);

    return 0;
}