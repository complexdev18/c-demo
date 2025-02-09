#include <stdio.h>

int main() {
    int array[100], n, element, count = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &element);

    for (int i = 0; i < n; i++) {
        if (array[i] == element) {
            count++;
        }
    }

    if (count > 0) {
        printf("Element %d is present in the array and its frequency is %d.\n", element, count);
    } else {
        printf("Element %d is not present in the array.\n", element);
    }

    return 0;
}
