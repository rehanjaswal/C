// #include <stdio.h>
// #include <string.h>
// struct student {
//     char name[100];
//     int roll;
//     float cgpa;
// };
// int main() {
//          struct student s;
//     s.roll = 25106061;
// //     s.cgpa = 6.3;
// //     strcpy(s.name, "rehan");    
// //     printf("%s\n", s.name);
// //     printf("%d\n", s.roll);
// //     printf("%f\n", s.cgpa);
//         struct student *ptr = &s;
//         printf("student roll - %d\n", (*ptr).roll);

//     return 0;
// }


#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int n, flag = 1;
    printf("enter a string: ");
    scanf("%s", str);
    n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[n-1-i]) {
            flag = 0;
            break;
        }
    }
    if (flag) {
        printf("palindrome");
    }
    else {
        printf("not a palindrome");
    }
    return 0;
}
