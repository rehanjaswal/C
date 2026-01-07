// wap to find sum of digits of a given number      
// 12345 sum = 1+2+3+4+5   n%10 gives unit place digit
#include <stdio.h>
int main(void) {
    int temp,n,last_digit, sum = 0;
    printf("enter a number: ");
    scanf("%d",&n);
    temp = n;
    while(temp>0) {
        last_digit = temp % 10;
        sum = sum + last_digit;
        temp = temp/10;
    }
    printf("the sum of the digits of %d is %d",n,sum);
    return 0;
}