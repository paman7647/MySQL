#include <stdio.h>

// Recursive function for nCr
int binomial(int n, int r) {
    if (r == 0 || r == n)
        return 1;
    return binomial(n - 1, r - 1) + binomial(n - 1, r);
}

int main() {
    int n, r;
    printf("Enter value of n and r: ");
    scanf("%d %d", &n, &r);

    int result = binomial(n, r);
    printf("%dC%d = %d\n", n, r, result);

    return 0;
}
