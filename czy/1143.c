#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void print_graphic(int n,char c)
{
    int i,k,j;
   // scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        for(j=1;j<=n-i;++j) printf(" ");
        for(k=1;k<=1+(i-1)*2;++k) printf("%c",c);
        printf("\n");
    }
}



int main()
{
    char c;
    int num;
    scanf("%d %c", &num, &c);
    print_graphic(num, c);
    return 0;
}

/**************************************************************
	Problem: 1143
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

