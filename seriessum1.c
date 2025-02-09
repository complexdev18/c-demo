#include <stdio.h>
#include <math.h>

double calculateSeries(double X, int n) {
    double sum = 0.0;
    int sign = 1;

    for (int i = 1; i <= n; i++) {
        sum += sign * (pow(X, i) / i);
        sign *= -1;
    }

    return sum;
}

int main() {
    double X;
    int n;
    
    printf("Enter the value of X: ");
    scanf("%lf", &X);
    
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    
    double result = calculateSeries(X, n);
    
    printf("The value of the series is: %.10lf\n", result);
    
    return 0;
}
