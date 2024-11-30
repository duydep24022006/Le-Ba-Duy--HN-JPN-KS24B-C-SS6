#include <stdio.h>

int main() {
    int n;
    printf("Nhap so n: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("So Fibonacci dau tien >= %d la: 0\n", n);
        return 0;
    }
    int a = 0, b = 1;
    int fib = 0;
    while (fib < n) {
        fib = a + b;
        a = b;
        b = fib;
    }
    printf("So Fibonacci dau tien >= %d la: %d\n", n, fib);
    return 0;
}

