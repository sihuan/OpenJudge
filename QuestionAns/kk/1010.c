#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if((a%4==0)&&(a%100!=0)||(a%400==0))printf("Yes");
    else printf("No");
}
/**************************************************************
	Problem: 1010
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

