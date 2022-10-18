#include <stdio.h>


int main() {

    int fahr;

    printf("|------Fahr-----|----Celsius----|\n");

    for (fahr = 300;fahr >= 0;fahr = fahr - 20) {
        printf("|\t%3d\t|\t%6.1f \t|\n",fahr,(5.0 / 9.0) * (fahr - 32.0));
    }
    
    printf("|---------------|---------------|");

    return 0;
}