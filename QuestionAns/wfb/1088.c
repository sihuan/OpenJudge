#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(n<0) n=-n;
    if(n<10) printf("%d",n);
    else
    {
        printf("%d%d",(n/10)%10,n%10);
    }
    return 0;
}

/**************************************************************
	Problem: 1088
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

