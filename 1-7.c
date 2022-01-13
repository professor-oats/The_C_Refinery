#include <stdio.h>


int main() {

    int i;
    int storestring[20] = {0};

    printf("Type in a string of letters and type EOF to end program\n");

    for(i = 0; (storestring[i] = getchar()) != EOF; i++) {
    }

    printf("%d", storestring[i]);

    return 0;
}
