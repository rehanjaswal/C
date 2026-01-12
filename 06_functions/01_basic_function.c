#include <stdio.h>
void man_utd() {
    printf("man united are the biggest club in the world, the impossible dream made possible, united till i die, the red devils\n");
    return;
}
void man_city() {
    printf("man city is a plastic club, the only thing blue in manchester is the sky, 115 charges plus gay af plus bald manager\n");
    man_utd(); // function call
    return;
}
void liverpool() {
    printf("liverpool fans eat rats in their council houses, filthy scouse bastards\n");
    man_city(); // function call
    return;
}
int main() {
    liverpool();
    return 0;
}