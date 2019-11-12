#include <stdio.h>
#include <string.h>



int main()
{
    int H=0,M=0,S=0,sum=0;
    int n=0,i;
    while(scanf("%d:%d:%d",&H,&M,&S)!=EOF)
    {
        sum=0;
        sum=H*3600+M*60+S+1;
        printf("%d\n",sum);
    }
    return 0;
}

/**************************************************************
	Problem: 1455
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

