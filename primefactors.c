#include <stdio.h>

// Function to find and print prime factors
void primeFactors(int n) {
    while (n % 2 == 0) {
        printf("2 ");
        n /= 2;
    }

    // Check for odd factors from 3 to sqrt(n)
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }

    // If n is still greater than 2, it's a prime number itself
    if (n > 2)
        printf("%d", n);
    
    printf("\n");
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Prime factors of %d are: ", num);
    primeFactors(num);
    
    return 0;
}
