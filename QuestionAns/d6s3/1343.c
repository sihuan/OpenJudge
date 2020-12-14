#include <stdio.h>
#include <ctype.h>

int is_alpha(char c)
{
    return isalpha(c);
}
int main()
{
    char ch;
    scanf("%c", &ch);
    printf("%s",
            ( is_alpha(ch) ? "Yes, it is a letter."
                          : "No, it is not a letter." )
          );
    return 0;
}

/**************************************************************
	Problem: 1343
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

