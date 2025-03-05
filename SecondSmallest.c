#include <stdio.h>

void findSecondSmallest(int arr[], int n) {
    int firstSmallest = arr[0], secondSmallest = arr[1];

    if (firstSmallest > secondSmallest) {
        firstSmallest = arr[1];
        secondSmallest = arr[0];
    }

    for (int i = 2; i < n; i++) {
        if (arr[i] < firstSmallest) {
            secondSmallest = firstSmallest;
            firstSmallest = arr[i];
        } else if (arr[i] < secondSmallest && arr[i] != firstSmallest) {
            secondSmallest = arr[i];
        }
    }
    printf("Second smallest element is %d\n", secondSmallest);
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    findSecondSmallest(arr, n);
    
    return 0;
}
