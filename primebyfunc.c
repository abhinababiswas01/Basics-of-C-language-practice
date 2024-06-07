#include <stdio.h>

int isPrime(int n) {
    int i;
    for (i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1) {
        printf("%d is not a prime number.", n);
    } else {
        if (isPrime(n) == 1) {
            printf("%d is a prime number.", n);
        } else {
            printf("%d is not a prime number.", n);
        }
    }
    return 0;
}
