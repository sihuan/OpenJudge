#include<stdio.h>
#include<math.h>
int main()
{
    int m,a,b,c;
    scanf("%d",&m);
    a=m/100;
    b=m%100/10;
    c=m%10;
    if(m==pow(a,3)+pow(b,3)+pow(c,3))printf("YES");
    else printf("NO");
}
/**************************************************************
	Problem: 1012
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:760 kb
****************************************************************/

