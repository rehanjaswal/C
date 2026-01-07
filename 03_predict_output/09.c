// wap to count digits of a number       12345
#include <stdio.h>
int main() {
    int n, temp, count = 0;
    printf("enter a number: ");
    scanf("%d",&n);
    temp = n; //save original value
    while (temp!=0) {
        temp = temp/10;
        count++;
    }
    printf("the number of digits in %d are %d",n,count);
    return 0;
}