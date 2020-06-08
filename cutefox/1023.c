#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d\n",a+b);
    while(scanf("%d",&a)!=EOF){
        scanf("%d",&b);
        printf("\n%d\n",a+b);
    }
    return 0;
}

/**************************************************************
	Problem: 1023
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

