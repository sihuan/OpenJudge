#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int is_primer(int num)
{
    int i,j,k=0,m,n,temp,first,second;
    if(num==1) return 0;
    if(num==2) return 1;
    if(num==2147483647) return 1;
    double b=(double) num;
    int as=sqrt(b);
    for(i=2;i<=as;++i)
    {
        if((num % i)==0) k=1;
    }

    if(k==0) return 1;
    else return 0;

}


int main()
{
    int num;
    while(scanf("%d", &num) != EOF)
    {
        if(is_primer(num))
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}
/**************************************************************
	Problem: 1233
	User: 201601160202
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:756 kb
****************************************************************/

