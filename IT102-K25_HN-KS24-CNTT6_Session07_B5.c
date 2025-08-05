#include <stdio.h>

int main() {
    int n, original, remainder, result = 0, digits = 0;

    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    original = n;

    int temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    while (temp != 0) {
        remainder = temp % 10;
        int power = 1;
        for (int i = 1; i <= digits; i++) {
            power *= remainder;
        }
        result += power;
        temp /= 10;
    }

    if (result == original) {
        printf("%d la so Armstrong\n", original);
    } else {
        printf("%d khong la so Armstrong\n", original);
    }

    return 0;
}