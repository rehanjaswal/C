// #include <stdio.h>
// int ways(int sr, int sc, int er, int ec) {
//     int rightWays = 0, downWays = 0;   // initialise values
//     if (sr == er && sc == ec) return 1;   // destination reached, counts as one way
//     if (sr < er && sc < ec) {
//         rightWays += ways(sr, sc + 1, er, ec);
//         downWays += ways(sr + 1, sc, er, ec);
//     }   
//     if (sr == er) {
//         rightWays += ways(sr, sc + 1, er, ec);
//     }
//     if (sc == ec) {
//         downWays += ways(sr + 1, sc, er, ec); 
//     }
//     int totalWays = downWays + rightWays;
//     return totalWays;
// }
// int main() {
//     int n, m;
//     scanf("%d %d", &n, &m);
//     printf("%d\n", ways(1, 1, n, m));
//     return 0;
// }


/// method 2 mate ///

#include <stdio.h>
int maze(int n, int m) {
    int rightWays = 0, downWays = 0;
    if (n == 1 && m == 1) return 1;
    if (n == 1) rightWays += maze(n, m - 1);
    if (m == 1) downWays += maze(n - 1, m);
    if (n > 1 && m > 1) {
        rightWays += maze(n, m - 1);
        downWays += maze(n - 1, m);
    }
    int totalWays = rightWays + downWays;
    return totalWays;
}
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%d\n", maze(n, m));
    return 0;
}