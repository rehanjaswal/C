#include <stdio.h>
int sum(int n) {
    if (n == 0 || n == 1) return n; 
    return n + sum(n - 1);             // sum(n) = n + sum(n - 1)
}
int main() {
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    printf("%d\n", sum(n));
    return 0;
}