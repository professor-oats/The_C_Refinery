#include <stdio.h>

// Make a program that draws a vertical histogram of the lengths of the words typed. I will define a word as any combination of letters that is separated by any whitespace.

int main() {

    int c = 0, i = 0, amountwords = 0, j = 0, jmax = 0, h = 0, whitespace = 0;
    int wordlength[100] = {0};    // Can store total 100 words

    printf("Yo bro. This program keeps track of the length of the words you type. Terminate with EOF.\n");

    for(; i < 100 && c != EOF; i++) {
	for (; (c = getchar()) != EOF && c != '\n' && c != '\t' && c != ' '; j++) {
	    whitespace = 0;    // Inside word
	}
	
	wordlength[i] = j;
	
	if(c == '\n' || c == 't' || c == ' ') {
	    if (whitespace) {
	        i--;
	    }
	    else {
	        whitespace = 1;
	    }
	}

	if (j > jmax) {
	    jmax = j;
	}
	j = 0;    // Resetting character count
    } 

    amountwords = i - 1;    // Minus 1 hence one extra increment on EOF


    for(h = jmax; h > 0; h--) {
        for(i = 0; i < amountwords; i++) { 
	    if ((wordlength[i] - 1) >= h) {    // Shortening histogram with 1 since I add an extra bottom later
	        putchar('|');
	        putchar(' ');
	        putchar('|');
	    }
	    else {
		putchar(' ');
		putchar(' ');
		putchar(' ');
	    }
	}
	putchar('\n');
    }
    for (i = 0; i < amountwords; i++) {    // Added bottom here
	printf("|%d|", i);
    }

    return 0;
}
	
	

