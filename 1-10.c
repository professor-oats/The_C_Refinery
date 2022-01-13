#include <stdio.h>

int main() {
    int upperi = 0, i = 0, c = 0;
    int storechars[100] = {0};

    printf("This program replaces each tab, backspace and backslash and shows the ascii code for it\n");


    for (i = 0; (c = getchar()) != EOF && i < 100; i++) {
	if (c == '\t') {
            storechars[i] = '\\';
	    i++;
	    storechars[i] = 't';
	}
	else if (c == '\b') {
	    storechars[i] = '\\';
	    i++;
	    storechars[i] = 'b';
	}
	else if (c == '\\') {
	    storechars[i] = '\\';
	    i++;
	    storechars[i] = '\\';
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
	    
