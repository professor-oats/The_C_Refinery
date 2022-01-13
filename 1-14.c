#include <stdio.h>

// Write a program to print a histogram of the different characters in its input.

// I will make the easiest solution of only keeping track of the a-zA-Z and have the rest of the characters stored as others.

int main() {

    int c = 0, i = 0;
    int storecharacterssmall[25] = {0};
    int storecharactersbig[25] = {0};
    int storeothers = 0;

    while ((c = getchar() !=EOF) {
	if (c >= 'a' && c <= 'z') {
	    ++storecharacterssmall[c - 'a'];
	}
	else if (c >= 'A' && c <= 'Z') {
	    ++storecharactersbig[c - 'A'];
	}
	else {
	    ++storeothers;
	}
    }

    return 0;
}
