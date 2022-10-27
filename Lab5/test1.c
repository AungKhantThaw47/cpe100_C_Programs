#include <ctype.h>
#include <stdio.h>

int main()
{
    int c, n = 0;
    // while((c = getchar()) != "\r" && isdigit(c))
    while((c = getchar()) != "\r")
    {
	    n = 10 * n + (c - '0');
        printf("\nOutput: %c",c);
    }
    if(c != "\r")
    {
        printf("%c",c);
	    ungetc(c, stdin);
    }
    return 1;
}