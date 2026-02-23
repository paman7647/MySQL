#include <stdio.h>

// Function to find GCD using recursion
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    int result = gcd(x, y);
    printf("GCD of %d and %d is: %d\n", x, y, result);

    return 0;
}
