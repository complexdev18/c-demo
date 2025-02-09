#include <stdio.h>

unsigned long long factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }
    unsigned long long fact = 1;
    for (int i = 2; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        unsigned long long result = factorial(num);
        printf("The factorial of %d is %llu.\n", num, result);
    }

    return 0;
}
