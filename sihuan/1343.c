#include <stdio.h>

int is_alpha(char c) {
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
    return 1;
  } else {
    return 0;
  }
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
	User: 201801011012
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

