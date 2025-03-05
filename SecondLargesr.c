#include <stdio.h>

void findSecondLargest(int arr[], int n) {
    int firstLargest = arr[0], secondLargest = arr[1];

    if (firstLargest < secondLargest) {
        firstLargest = arr[1];
        secondLargest = arr[0];
    }

    for (int i = 2; i < n; i++) {
        if (arr[i] > firstLargest) {
            secondLargest = firstLargest;
            firstLargest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != firstLargest) {
            secondLargest = arr[i];
        }
    }
    printf("Second largest element is %d\n", secondLargest);
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    findSecondLargest(arr, n);

    return 0;
}
