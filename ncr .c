#include <stdio.h>

// Calculate factorial of a number
unsigned long long factorial(int num) {
    unsigned long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

// Calculate nCr using factorial
unsigned long long nCr(int n, int r) {
    if (r > n) return 0;  // invalid input
    unsigned long long numerator = factorial(n);
    unsigned long long denominator = factorial(r) * factorial(n - r);
    return numerator / denominator;
}

int main() {
    int n, r;
    printf("Enter values for n and r: ");
    scanf("%d %d", &n, &r);

    printf("Value of %dC%d is %llu\n", n, r, nCr(n, r));
    return 0;
}
