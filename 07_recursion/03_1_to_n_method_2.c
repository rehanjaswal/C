#include <stdio.h>
void increasing(int n) {
    if (n == 0) return;  // base case
    increasing(n - 1);   // function call
    printf("%d\n", n);   // code
}
int main() {
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
}