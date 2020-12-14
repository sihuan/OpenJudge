#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int a;
    scanf("%d",&a);
    int b = sqrt(a);
    if(b*b == a && a%2==0 && a>0)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}

/**************************************************************
	Problem: 1403
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:756 kb
****************************************************************/

