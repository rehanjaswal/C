// #include <stdio.h>
// int main() {
//     FILE *fptr;
//     fptr = fopen("a.txt", "r");
//     fclose(fptr);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     FILE *fptr;
//     fptr = fopen("b.txt", "w");
//     if (fptr == NULL) {
//         printf("file doesn't exist");
//     }
//     else {
//         fclose(fptr);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     FILE *fptr;
//     fptr = fopen("a.txt", "r");
//     char ch;
//     fscanf(fptr, "%c", &ch);
//     printf("character = %c\n", ch);
    
//     fscanf(fptr, "%c", &ch);
//     printf("character = %c\n", ch);
    
//     fscanf(fptr, "%c", &ch);
//     printf("character = %c\n", ch);
    
//     fscanf(fptr, "%c", &ch);
//     printf("character = %c\n", ch);
    
//     fscanf(fptr, "%c", &ch);
//     printf("character = %c\n", ch);

//     fclose(fptr);
//     return 0;
// }


// #include <stdio.h>
// int main() {
//     FILE *fptr;
//     fptr = fopen("a.txt", "w");
//     fprintf(fptr, "%c", 'M');
//     fprintf(fptr, "%c", 'A');
//     fprintf(fptr, "%c", 'N');
//     fprintf(fptr, "%c", 'G');
//     fprintf(fptr, "%c", 'O');
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     FILE *fptr;
//     // fptr = fopen("a.txt", "r");
//     // printf("%c", fgetc(fptr));
//     // printf("%c", fgetc(fptr));
//     // printf("%c", fgetc(fptr));
//     // printf("%c", fgetc(fptr));
//     // printf("%c", fgetc(fptr));
//     fptr = fopen("a.txt", "w");
//     fputc('h', fptr);
//     fputc('e', fptr);
//     fputc('l', fptr);
//     fputc('l', fptr);
//     fputc('o', fptr);
//     fclose(fptr);
//     return 0;
// }


// #include <stdio.h>
// int main() {
//     FILE *fptr;
//     fptr = fopen("a.txt", "r");
//     char ch;
//     ch = fgetc(fptr);
//     while (ch != EOF) {
//         printf("%c", ch);
//         ch = fgetc(fptr);
//     }
//     printf("\n");
//     fclose(fptr);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     FILE *fptr;
//     fptr = fopen("student.txt", "w");
//     char name[100];
//     int age;
//     float cgpa;
//     printf("enter name: ");
//     scanf("%s", name);
//     printf("enter age: ");
//     scanf("%d", &age);
//     printf("enter cgpa: ");
//     scanf("%f", &cgpa);

//     fprintf(fptr, "name - %s\n", name);
//     fprintf(fptr, "age - %d\n", age);
//     fprintf(fptr, "cgpa - %f", cgpa);
//     fclose(fptr);
//     return 0;
// }

#include <stdio.h>
int main() {
    FILE *fptr;
    fptr = fopen("a.txt", "r");
    int a, b;
    fscanf(fptr, "%d", &a);
    fscanf(fptr, "%d", &b);
    fclose(fptr);
    fptr = fopen("a.txt", "w");
    fprintf(fptr, "%d", a + b);
    fclose(fptr);
    return 0;
}