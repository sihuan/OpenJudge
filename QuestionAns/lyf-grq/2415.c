#include <stdio.h>
#include <stdlib.h>
char nixu()
{
	char a[101];
	if(gets(a)!=NULL)
	{
	nixu(); 
	printf("%s\n",a);
	}
	return 1;
}
int main()
{
	nixu();
    return 0;
}

/**************************************************************
	Problem: 2415
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

