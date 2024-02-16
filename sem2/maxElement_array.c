#include <stdio.h>

int findMax(int arr[], int n) {
    int max = arr[0]; // Assume the first element as maximum

    // Traverse the array to find the maximum element
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int main() {
    int array[] = {10, 24, 4, 45, 23}; // Example array
    int size = sizeof(array) / sizeof(array[0]);

    int maxElement = findMax(array, size);
    printf("The maximum element in the array is: %d\n", maxElement);

    return 0;
}