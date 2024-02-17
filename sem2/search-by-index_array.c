#include <stdio.h>

int searchElement(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return i; // Return index of the element if found
        }
    }
    return -1; // Return -1 if element not found
}

int main() {
    int array[] = {1, 3, 5, 7, 9}; // Example array
    int size = sizeof(array) / sizeof(array[0]);
    int elementToSearch = 5;

    int index = searchElement(array, size, elementToSearch);
    if (index != -1) {
        printf("Element %d found at index: %d\n", elementToSearch, index);
    } else {
        printf("Element %d not found in the array.\n", elementToSearch);
    }

    return 0;
}