#include <stdio.h>
int add (int x, int y) {
    return x + y;
}
int main() {
    int a,b;
    printf("enter first number: ");
    scanf("%d",&a);
    printf("enter second number: ");
    scanf("%d",&b);
    int sum = add (a,b);
    printf("the sum of %d and %d is %d",a,b,sum);
    return 0;
}