// #include<stdio.h>
// int main() {
//     int arr[3] = {1, 2, 3};
//     arr[2] = 7;
//     printf("%d\n", arr[2]);
// }

// #include <stdio.h>
// int main() {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     printf("%d\n", sizeof(arr));
//     return 0;
// }

// #include<stdio.h>
// void change(int arr[], int n) {
//     printf("%d\n", n);
//     arr[2] = 7;
// }
// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / 4;
//     printf("%d\n", n);
//     printf("%d\n",arr[2]);
//     change(arr, n);
//     printf("%d\n",arr[2]);
// }

// #include <stdio.h>
// int main() {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     int sum = 0;
//     for (int i = 0; i < n; i++) {
//         sum += arr[i];
//     }
//     printf("%d\n", sum);
// }

// #include <stdio.h>
// #include<limits.h>
// int main() {
//     int n;
//     scanf("%d", &n);    
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     int mx = INT_MIN; // int mx = arr[0];
//     for (int i = 1; i < n; i++) {
//         if (arr[i] > mx) {
//             mx = arr[i];
//         }
//     }
//     printf("%d\n", mx);
// }

// #include <stdio.h>
// int main() {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     for (int i = 0; i < n; i++) {
//         if (i % 2 == 0) {
//             arr[i] += 10;
//         }
//         else {
//             arr[i] *= 2;
//         }
//     }
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
// }


// #include <stdio.h>
// int main() {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     int target, count = 0;
//     scanf("%d", &target);
//     for (int i = 0; i < n; i++) {
//         if (arr[i] > target) {
//             count += 1;
//         }
//     }
//     printf("%d\n", count);
// }


// #include <stdio.h>
// #include <stdbool.h>
// int main() {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     int target;
//     scanf("%d", &target);
//     bool flag = false;
//     for (int i = 0; i < n; i++) {
//         if (arr[i] == target) {
//             flag = true;
//             break;
//         }
//     }
//     if (flag) {
//         printf("%d exists\n", target);
//     }
//     else {
//         printf("%d does not exist\n", target);
//     }
// }


// #include <stdio.h>
// #include <limits.h>
// int main() {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7};
//     int n = sizeof(arr) / 4;
//     int mx = INT_MIN;
//     for (int i = 0; i < n; i++) {
//         if (arr[i] > mx) {
//             mx = arr[i];
//         }
//     }
//     int smx = INT_MIN;
//     for (int i = 0; i < n; i++) {
//         if (arr[i] != mx && arr[i] > smx) {
//             smx = arr[i];
//         }
//     }
//     printf("%d is the largest number\n", mx);
//     printf("%d is the second largest number\n", smx);
// }

// #include <stdio.h>
// int main() {
//     int arr1[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr1) / 4;
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr1[i]);
//     }
//     printf("\n");
//     int arr2[n];
//     for (int i = 0; i < n; i++) {
//         arr2[i] = arr1[n - 1 - i];
//     }
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr2[i]);
//     }
// }


// #include <stdio.h>
// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     // reverse array
//     int i = 0, j = n - 1;
//     while (i < j) {
//         int temp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = temp;
//         i++;
//         j--;
//     }
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
// // }


// #include <stdio.h>
// int main() {
// int arr[4][2] = { {1, 90}, {2, 98} , {3, 87}, {4, 99} };
// for (int i = 0; i < 4; i++) {
//     for (int j = 0; j < 2; j++) {
//         printf("%d ", arr[i][j]);
//         }
//     printf("\n");
//     }
// }   

#include <stdio.h>
int main() {
    int arr[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            arr[i][j] = 10;
        }
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}   