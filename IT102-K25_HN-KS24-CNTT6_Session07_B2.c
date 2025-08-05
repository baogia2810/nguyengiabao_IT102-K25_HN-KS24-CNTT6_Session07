#include <stdio.h>

int main() {
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("%d! = %d\n", n, factorial);

    return 0;
}
