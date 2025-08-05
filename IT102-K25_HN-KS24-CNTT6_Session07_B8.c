#include <stdio.h>

int main() {
    int n, x, count = 0;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);
    printf("Nhap chu so x (0-9): ");
    scanf("%d", &x);

    if (n < 0) n = -n;

    while (n > 0) {
        if (n % 10 == x) {
            count++;
        }
        n /= 10;
    }

    printf("Chu so %d xuat hien %d lan\n", x, count);
    return 0;
}
