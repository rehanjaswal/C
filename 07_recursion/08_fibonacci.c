#include <stdio.h>         // 1 1 2 3 5 8 13 21 34 ... fib series
int fib(int n) {
    if (n == 1 || n == 2) return 1;
    return fib(n - 1) + fib(n - 2);
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", fib(n));
    return 0
}