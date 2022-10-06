#include<stdio.h>
int main()
{
    int m,n,x,y;
    while(scanf("%d",&n)!=EOF)
    {
        for(int i=1;i<=(n+1)/2;i++)
        {
            for(int j=1;j<=(n+1)/2-i;j++)
                printf("%c",' ');
            printf("%c",'*');
            for(int j=1;j<=2*i-3;j++)
                printf("%c",' ');
            if(i!=1)
                printf("%c",'*');
            printf("\n");
        }
         for(int i=(n+1)/2-1;i>=1;i--)
        {
            for(int j=1;j<=(n+1)/2-i;j++)
                printf("%c",' ');
            printf("%c",'*');
            for(int j=1;j<=2*i-3;j++)
                printf("%c",' ');
            if(i!=1)
                printf("%c",'*');
            printf("\n");
        }
        printf("\n");
    }
}
/**************************************************************
	Problem: 1170
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

