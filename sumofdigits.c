#include <stdio.h>

int sum_of_digits(int num) {
    int sum = 0;
    
    while (num != 0) {
        sum += num % 10;  // Extract the last digit and add to sum
        num /= 10;        // Remove the last digit
    }
    
    return sum;
}

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (number < 0) {
        number = -number; // Handle negative numbers
    }

    printf("Sum of digits: %d\n", sum_of_digits(number));
    
    return 0;
}
