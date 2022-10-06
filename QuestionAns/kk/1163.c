#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d:%d",&a,&b);
    if((a<12)&&(a>0))
        printf("%02d:%02d a.m.",a,b);
    else if(a>12)
        printf("%02d:%02d p.m.",a-12,b);
    else if(a==12)
        printf("%02d:%02d p.m.",a,b);
    else if(a==0)
        printf("%02d:%02d a.m.",a+12,b);

}
/**************************************************************
	Problem: 1163
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

