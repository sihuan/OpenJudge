#include <stdio.h>
#include <stdlib.h>
int print(int m, int n)
{
    int i,j;
    for(i=0; i<m; i++)
    {
        if(i==0||i==m-1)
            {for(j=0; j<n; j++)
                printf("*");

        putchar('\n');}

        if(i!=0&&i!=m-1)
        {
            for(j=0; j<n; j++)
                if(j==0||j==n-1)
                    printf("*");
                else
                    printf(" ");
            putchar('\n');
        }
    }
}

int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    print(m, n);
}

/**************************************************************
	Problem: 2416
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

