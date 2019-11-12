#include <stdio.h>
#define MAX_STR_LEN 109

int sijiqiuguo(int i)
{
    if(i==0) return 1;
    if(i==1) return 1;
    return i*sijiqiuguo(i-1);
}

int main()
{
    int i=0;
    scanf("%d",&i);
    printf("%d",sijiqiuguo(i));
    return 0;
}

/**************************************************************
	Problem: 1384
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

