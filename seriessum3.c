#include <stdio.h>

double factorial(int num) {
    if (num == 0 || num == 1) return 1;
    double fact = 1;
    for (int i = 2; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

double calculateSeries(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += (double)i / factorial(i);
    }
    return sum;
}

int main() {
    int n;
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    double result = calculateSeries(n);
    
    printf("The value of the series is: %.10lf\n", result);

    return 0;
}
