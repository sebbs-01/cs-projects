#include <stdio.h>
char siblings[8][20] = {"Mela", "Renatto", "Melissa", "Vanessa", "Sebastian", "Mia"};
int i;
int main(){
    while (i < 8){
        printf("%s\n", siblings[i]);
        i++;
    }
    return 0;
}