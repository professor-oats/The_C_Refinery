#include <stdio.h>

int main() {
    int upperi = 0, i = 0, c = 0, isblank = 0;
    int storechars[100] = {0};

    printf("This program replaces a string containing multiple blanks following by the same with single blanks only\n");

    for (i = 0; (c = getchar()) != EOF && i < 100; i++) {
	if (isblank == 1) {
	    if (c == ' ') {
		i--;
	    }
	    else {
		isblank = 0;
		storechars[i] = c;
	    }
	}
	else if (c == ' ') {
	    storechars[i] = c;
	    isblank = 1;
	}
	else {
	    storechars[i] = c;
	}
    }

    upperi = i;

    storechars[i] = '\0';

    for (i = 0; i < upperi; i++) {
	printf("%c", storechars[i]);
    }

    return 0;
}
	    
