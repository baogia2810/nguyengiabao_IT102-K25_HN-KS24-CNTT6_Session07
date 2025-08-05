#include <stdio.h>

int main() {
    int n, reversed = 0, remainder;

    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    printf("So dao nguoc la %d\n", reversed);

    return 0;
}