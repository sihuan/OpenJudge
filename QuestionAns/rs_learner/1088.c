#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int n,x;
    scanf("%d",&n);
    x=abs(n);

    if(x>100&&x%100>=10)
        printf("%d",x%100);
    if(x>100&&x%100<10&&x%100!=0)
        printf("0%d",x%100);
    if(x<100&&x>=0)
        printf("%d",x);
    if(x>=100&&x%100==0)
        printf("00");


    return 0;
}

/**************************************************************
	Problem: 1088
	User: 201801020908
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

