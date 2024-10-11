#include <stdio.h>
#include <string.h>

int main(void){
    char name[20], decoration[20], decorationTwo[20];
    printf("What is your name?: ");
    scanf("%s", name);
    printf("Type a decoration: ");
    scanf("%s", decoration);
    printf("Type a second decoration: ");
    scanf("%s", decorationTwo);
    strcat(decoration, name);
    strcat(decoration, decorationTwo);
    printf("%s\n", decoration);
    
    return 0;
}