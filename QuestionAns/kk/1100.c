#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    printf("Sun Mon Tue Wen Thu Fri Sat\n");
    if((n>=0)&&(n<=6))
        for(i=1;i<=4*n;i++)
            printf("%c",' ');
    for(i=n,j=1;j<=30;j++)
    {
        i++;
        if((j==1)||(i%7==1))printf("%3d",j);
        else printf("%4d",j);
        if(i%7==0)
            printf("\n");
    }


}
/**************************************************************
	Problem: 1100
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

