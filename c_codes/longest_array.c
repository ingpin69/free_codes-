#include <stdio.h>
#include <math.h>
int longestSubarray(int arr[], int n) {
    int left = 0;
    int right = 0;
    int max_length = 0;
    int distinct_count = 0;
    int distinct_values[2] = {0}; // Array to store the two distinct values

    while (right < n) {
        // If the current element is a new distinct value
        if (distinct_count < 2 && !(right > 0 && arr[right] == arr[right - 1])){
            distinct_values[distinct_count++] = arr[right];
        }

        // Check if the distinct values differ by no more than 1
        if (distinct_count == 2 && fabs(distinct_values[0] - distinct_values[1]) > 1) {
            // Move the left pointer to the right until we exclude one of the distinct values
            while (left < right && distinct_count == 2) {
                if (arr[left] == distinct_values[0]) {
                    left++;
                    if (arr[left] != distinct_values[0])
                        distinct_count--;
                } else if (arr[left] == distinct_values[1]) {
                    left++;
                    if (arr[left] != distinct_values[1])
                        distinct_count--;
                } else {
                    distinct_count--;
                    left++;
                }
            }
        }

        // Update the maximum subarray length
        max_length = (right - left + 1) > max_length ? (right - left + 1) : max_length;

        // Move the right pointer to the right
        right++;
    }

    return max_length;
}

int main() {
    int arr[] = {0, 1, 2, 1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = longestSubarray(arr, n);
    printf("The length of the longest subarray is %d\n", result);

    return 0;
}
