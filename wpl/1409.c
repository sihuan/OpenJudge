#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    long a,d,s;
    while(scanf("%d",&a)!=EOF)
    {
        s=0;
        while(a>0)
        {
            d=a%10;
            a=(a-d)/10;
            s=s+d;
        }
        printf("%ld\n",s);
    }
    return 0;
}

/**************************************************************
	Problem: 1409
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

