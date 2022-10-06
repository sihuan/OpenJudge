#include<stdio.h>
int main()
{
    int N,s;
    scanf("%d",&N);
    if(N>0)
    {
        s=1;
        printf("%d",s);
        while(s<N)
        {
            s++;
            printf(" %d",s);
        }
    }
    else if(N<0)
    {
        s=-1;
        printf("%d",N);
        while(N<s)
        {
            N++;
            printf(" %d",N);
        }
    }
    else if(N==0)printf("0");
}
/**************************************************************
	Problem: 1167
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

