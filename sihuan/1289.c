
#include <stdio.h>

int is_vocals(char c) {
  if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' ||c == 'E' || c == 'I' || c == 'O' || c == 'U') {
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
            ( is_vocals(ch) ? "It is a vocals."
                            : "It is not a vocals." )
          );
    return 0;
}
/**************************************************************
	Problem: 1289
	User: 201801011012
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

