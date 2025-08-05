#include <stdio.h>

int main() {
    int n;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);
    int evenCount = 0;
    int oddCount = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("So chu so chan: %d\n", evenCount);
    printf("So chu so le: %d\n", oddCount);

    return 0;
}