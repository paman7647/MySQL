#include <stdio.h>

int main() {
    int n, i, found = 0;
    int arr[50];

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter roll numbers:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++) {
        if (arr[i] == 107) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Roll number 107 is found at position %d\n", i + 1);
    else
        printf("Roll number 107 is NOT present.\n");

    return 0;
}
