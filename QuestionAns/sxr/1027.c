#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, i, j;
    int a=0,k=0;
    int s[110];
    scanf("%d %d", &m, &n);
    i = n;
    while(i>=m)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0&&i!=j)
              break;
            else if(i==j)
            {
                s[a]=j;
                a++;
            }
        }
        i--;
    }
    printf("=====\n");
    for(k=0;k<a;k++)
    {
        printf("%d\n",s[k]);
    }
    printf("=====\n");
    return 0;
}
/**************************************************************
	Problem: 1027
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

