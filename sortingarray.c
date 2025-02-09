#include <stdio.h>

void findLargestSmallest(int array[], int n, int *largest, int *smallest) {
    *largest = array[0];
    *smallest = array[0];
    for (int i = 1; i < n; i++) {
        if (array[i] > *largest) {
            *largest = array[i];
        }
        if (array[i] < *smallest) {
            *smallest = array[i];
        }
    }
}

void sortArrayAscending(int array[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (array[i] > array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

void sortArrayDescending(int array[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (array[i] < array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

int main() {
    int array[100], n;
    int largest, smallest;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    findLargestSmallest(array, n, &largest, &smallest);
    printf("The largest number in the array is %d.\n", largest);
    printf("The smallest number in the array is %d.\n", smallest);

    sortArrayAscending(array, n);
    printf("The array sorted in ascending order is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    sortArrayDescending(array, n);
    printf("The array sorted in descending order is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
