#include <stdio.h>

int main() {
    int n, original, reversed = 0, remainder;

    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    original = n;

    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    if (original == reversed) {
        printf("%d la so doi xung\n", original);
    } else {
        printf("%d khong la so doi xung\n", original);
    }

    return 0;
}