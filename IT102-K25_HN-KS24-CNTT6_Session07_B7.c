#include <stdio.h>

int main() {
    int start, end;
    printf("Nhap so nguyen start: ");
    scanf("%d", &start);
    printf("Nhap so nguyen end: ");
    scanf("%d", &end);

    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }

    printf("Cac so nguyen to trong [%d, %d] la: ", start, end);
    for (int number = start; number <= end; number++) {
        int isPrime = 1;
        if (number <= 1) {
            isPrime = 0;
        }
        else if (number == 2) {
            isPrime = 1;
        }
        else if (number % 2 == 0) {
            isPrime = 0;
        }
        else {
            for (int i = 3; i * i <= number; i += 2) {
                if (number % i == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }
        if (isPrime) {
            printf("%d ", number);
        }
    }
    printf("\n");
    return 0;
}
