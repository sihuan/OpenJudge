#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M,bai,shi,ge;
    int x=0;
    while(scanf("%d",&M)!=EOF)

    {
        int a=0,i=100;
        for(i==100;i<=999;i++)
    {
        bai=i/100;
        shi=(i%100)/10;
        ge=(i%100)%10;
        if(i%M==0&&bai!=shi&&shi!=ge&&bai!=ge)
        a=a+i;
    }
    x=x+1;
    printf("case %d:%d\n",x,a);
    }

    return 0;
}

/**************************************************************
	Problem: 1207
	User: 201901060819
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

