#include <stdio.h>
int main()
{   int s=0,h=0,m=0,t=0;
   while(scanf("%02d:%02d:%02d",&h,&m,&s)!=EOF)
   {
       t=3600*h+m*60+s+1;
       printf("%d\n",t);
   }



    return 0;
}

/**************************************************************
	Problem: 1455
	User: 201901061304
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

