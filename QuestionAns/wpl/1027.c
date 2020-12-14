#include <stdio.h>
#include <stdlib.h>

int main()
{

int n,m,a,b,s;
scanf("%d%d",&m,&n);
printf("=====\n" );
for(a=n;a>=m;a-- )
{
    for (b=2;b<a;b++)
        if (a%b==0)
        break;
if (b>=a&&a!=1&&a!=0)
    printf("%d\n" ,a);
}
printf("=====");
return 0;
}


/**************************************************************
	Problem: 1027
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

