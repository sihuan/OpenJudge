#include <stdio.h>
int main()
{   int s,h,m;
   while(scanf("%d",&s)!=EOF)
    { if(s==0)break;
    s=s-1;
    h=s/3600;
    s=s-3600*h;
    m=s/60;
    s=s-60*m;
    printf("%02d:%02d:%02d\n",h,m,s);
    }



    return 0;
}

/**************************************************************
	Problem: 1244
	User: 201901061304
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

