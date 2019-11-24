#include<stdio.h>
int main()
{
    int a,b,c,d,sum;
    int e,f,g;
    scanf("%d %d %d %d\n",&a,&b,&c,&d);
    scanf("%d %d %d",&e,&f,&g);
    sum=e+f+g;
    if((e>=a)&&(f>=b)&&(g>=c)&&(sum>=d))
        printf("congratulations");
    else
        printf("sorry");



    return 0;
}
/**************************************************************
	Problem: 1404
	User: 201801020908
	Language: C
	Result: Accepted
	Time:20 ms
	Memory:748 kb
****************************************************************/

