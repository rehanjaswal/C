#include <stdio.h>
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}
int main() {
    int a,b;
    printf("enter first number, a : ");
    scanf("%d",&a);
    printf("enter second number, b : ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("the swapped value of a is : %d\n",a);
    printf("the swapped value of b is : %d\n",b);
    return 0;
}