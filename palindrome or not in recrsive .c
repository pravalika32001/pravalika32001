#include <stdio.h>

int reverseNumber(int num, int rev) {
    if (num == 0)
        return rev;
    return reverseNumber(num / 10, rev * 10 + num % 10);
}

int isPalindrome(int num) {
    if (num < 0)  // Negative numbers are not palindrome
        return 0;
    return (num == reverseNumber(num, 0));
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num))
        printf("%d is a palindrome\n", num);
    else
        printf("%d is not a palindrome\n", num);

    return 0;
}
