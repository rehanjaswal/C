// * * * * 
// * * * 
// * * 
// * 

#include <stdio.h>
int main(void) {
    int n;
    printf("enter number of rows: ");
    scanf("%d",&n);
    int temp = n;
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=temp;j++) {
            printf("* ");
    }
    temp--;
    printf("\n");  
 }
return 0;
}