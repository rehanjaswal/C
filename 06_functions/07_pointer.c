#include <stdio.h>
int main() {
    int a = 7;
    int *x = &a;
    int **y = &x;
    printf("%d\n",a);
    printf("%d\n",*x);
    printf("%d\n",**y);
    printf("%p\n",a);
    printf("%p\n",x);
    printf("%p\n",y);
    return 0;
}