#include <stdio.h>
int powerLog(int a, int b) {
    if (b == 0) return 1;
    int x = powerLog(a, b / 2);
    if (b % 2 == 0) return x * x;
    else return x * x * a;
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", powerLog(a, b));
    return 0;
}