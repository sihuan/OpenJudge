#include <stdio.h>
#include <stdlib.h>

int main()
{
     int m,n,x;
     double w;
    scanf("%d%d%d",&m,&n,&x);
    w=m*x;
    if(w>=n)
        printf("%.2lf",1.0*w*0.88);
    else
         printf("%.2lf",w);
    return 0;
}

/**************************************************************
	Problem: 1009
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

