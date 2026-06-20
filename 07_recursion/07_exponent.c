#include <stdio.h>
int exponent(int a, int b) {
    if (b == 0) return 1;   
    return a * exponent(a, b - 1);    // a to the power of b is a times a to the power of b - 1
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", exponent(a, b));
    return 0;
}