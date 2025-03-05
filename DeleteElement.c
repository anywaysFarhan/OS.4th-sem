#include <stdio.h>

void deleteElement(int arr[], int *n, int pos) {
    if (pos >= *n || pos < 0) {
        printf("Invalid position!\n");
        return;
    }

    for (int i = pos; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;  // Reduce the size of the array
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int pos;

    printf("Enter the position of the element to delete: ");
    scanf("%d", &pos);

    deleteElement(arr, &n, pos);

    printf("Array after deletion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
