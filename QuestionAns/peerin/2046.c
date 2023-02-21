#include <stdio.h>

char cnvchar(char c){

  //65～90 大写
  //97~122 小写

  return c>=65&&c<=90?c+32:c-32;


}




int main()
{
    char ch;
    ch = getchar();
    ch = cnvchar(ch);
    putchar(ch);
    return 0;
}
/**************************************************************
	Problem: 2046
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

