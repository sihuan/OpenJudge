#include <stdio.h>

int main()

{
    int k,m,n,i;
    int a=0;
    scanf("%d %d %d",&k,&m,&n);
    for(i=1; i<=k; i++)
    {
        if((i%m==0&&i%n!=0)||(i%m!=0&&i%n==0))
        {
            if(a!=0)
                printf(" ");

            printf("%d",i);
            a++;
        }

    }
    return 0;
}

/**************************************************************
	Problem: 1019
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

