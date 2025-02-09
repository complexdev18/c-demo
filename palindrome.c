#include <stdio.h>

int isPalindrome(int num) {
    int originalNum = num, reversedNum = 0, digit;

    while (num > 0) {
        digit = num % 10;           // Extract last digit
        reversedNum = reversedNum * 10 + digit; // Append digit to reversed number
        num /= 10;                  // Remove last digit
    }

    return (originalNum == reversedNum);
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num))
        printf("%d is a Palindrome number.\n", num);
    else
        printf("%d is Not a Palindrome number.\n", num);

    return 0;
}
