#include<stdio.h>
int main()
{
    int a,b,c,j,n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        printf("case %d : ",i);
        for(j=1;j<=a;j++)
        {
            printf("|");
        }
        printf("\n");
    }

    return 0;
}
/**************************************************************
	Problem: 1496
	User: 201801020908
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

