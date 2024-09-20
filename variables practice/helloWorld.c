#include <stdio.h>
#include <string.h>

int main(void){
    char name[20];
    printf("Type in your name: ");
    scanf("%s", name);
    printf("Hello %s\n", name);
    return 0;
}