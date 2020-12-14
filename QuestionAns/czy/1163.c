#include<stdio.h>

int main()

{

int a,b;
scanf("%d:%d",&a,&b);
if(a>=1&&a<=11)

printf("%02d:%02d a.m.",a,b);

if(a==0)

printf("12:%02d a.m.",b);

if(a==12)

printf("12:%02d p.m.",b);

if(a>=13&&a<=23)

printf("%02d:%02d p.m.",a-12,b);

return 0;

}



/**************************************************************
	Problem: 1163
	User: 201601160202
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

