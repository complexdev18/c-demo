#include <stdio.h>
#include <math.h>

/*Function to check if a number is prime*/
int isPrime(int n) {
    if (n <= 1) return 0;
    if (n <= 3) return 1; 

    if (n % 2 == 0 || n % 3 == 0) return 0;

    for (int i = 5; i <= sqrt(n); i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return 0;
    }
    return 1;
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("%d is a Prime Number\n", num);
    else
        printf("%d is Not a Prime Number\n", num);

    return 0;
}
