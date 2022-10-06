#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void execute(char inp[][101], int i)
{
    if(gets(inp[i])==NULL)
        return;
    execute(inp,i+1);
    puts(inp[i]);
}
int main()
{
   char inp[100][101];
   execute(inp,0);
}

/**************************************************************
	Problem: 2415
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

