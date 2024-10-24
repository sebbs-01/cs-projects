#include <stdio.h>


void helloName(char name[]){
    printf("Hello %s\n", name);
}


int main(void){
    helloName("Simar");
    helloName("Kaleb");
    helloName("Ace");
    helloName("Tyler");
    helloName("Frank");
    return 0;
}