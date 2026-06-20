// stair of n steps, the guy is only allowed to climb one or two stairs at once
#include <stdio.h>
int stairWays(int n) {
    if (n == 1 || n == 2) return n;
    return stairWays(n - 1) + stairWays(n - 2);
}
int main() {
    int n; 
    scanf("%d", &n);
    printf("%d\n", stairWays(n));
}