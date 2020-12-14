#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    double b;
    scanf("%d",&a);
    b=sqrt(a);
    if(a%2==0&&a>=0&&b*b==a)
        printf("yes");
    else
        printf("no");



    return 0;
}

/**************************************************************
	Problem: 1403
	User: 201801020908
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:756 kb
****************************************************************/

