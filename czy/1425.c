#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int m,n,x,y,z,i,j,k;
    char a,b;
    scanf("%d %c %c %d %d",&m,&a,&b,&x,&n);
    int aa=a-'A'+1;
    int bb=b-'A'+1;
    for(i=1;i<=n;++i)
    {
        printf("%04d%02d%02d%02d%02d\n",m,aa,bb,x,i);
    }

    return 0;
}

/**************************************************************
	Problem: 1425
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

