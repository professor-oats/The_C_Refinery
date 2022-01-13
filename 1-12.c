#include <stdio.h>

// Make a program that prints its input one word per line. Will define every word as any amount of letters that does not appear as whitespace.

int main() {

    int c = 0, newline = 0, whitespace = 0;

    while ((c = getchar()) != EOF) {
	if (c == '\n') {
	    if(newline) {
		continue;    // Makes program faster than having this empty
	    }
	    else {
		putchar(c);
	    }
	    newline = 1;
	}

	if (c == ' ' || c == '\t') {
	    if(whitespace) {
		continue;
	    }
	    else {
		putchar('\n');
	    }
	    whitespace = 1;
	}
	else {
	    putchar(c);
	    newline = 0;
	    whitespace = 0;
	}
    }
    return 0;
}
