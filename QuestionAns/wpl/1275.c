#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
        if(i%3==1&&i%4==2&&i%5==3)
        printf("%d\n",i);
    return 0;
}

/**************************************************************
	Problem: 1275
	User: 201901060819
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

