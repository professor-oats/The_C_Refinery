#include <stdio.h>

int main() {

    int countnewline = 0, countblank = 0, counttab = 0, c = 0;

    printf("This program counts all blanks, tabs and newline and output them on stream\n");
    while((c = getchar()) != EOF) {
	if (c == ' ') {
	    countblank++;
	}
	else if (c == '\t') {
	    counttab++;
	}
	else if (c == '\n') {
	    countnewline++;
	}
    }

    printf("Amount blanks: %d\nAmount tabs: %d\nAmount newlines: %d\n", countblank, counttab, countnewline);

    return 0;
}
