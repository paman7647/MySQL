#include <stdio.h>

int main() {
    int n, i, key, low, high, mid;
    printf("Enter number of books: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter sorted ISBN numbers:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter ISBN to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            printf("ISBN %d found at index %d\n", key, mid);
            return 0;
        } else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    printf("ISBN not found.\n");
    return 0;
}
