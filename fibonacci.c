#include <stdio.h>
// Recursive function to get Fibonacci number
int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int num;
    
    printf("Enter the number of terms: ");
    scanf("%d", &num);

    printf("Fibonacci Sequence: ");
    for (int i = 0; i < num; i++) {
        printf("%d ", fibonacci(i));
    }
    
    printf("\n");
    
    return 0;
}
