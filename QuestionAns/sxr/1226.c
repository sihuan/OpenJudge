#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x,y;
    int i,j,a,b,c,k=0;
    int flag = 1;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if((a<b?a:b)!=0) c=(a<b?a:b);
        else c=1;
        for(i=c; i<=(a<b?b:a); i++)
        {
            x=i;
            for(j=x+1; j<=(a<b?b:a); j++)
            {
                y=sqrt(j*j-x*x);
                if(y==(int)y&&y>=x)
                {
                    if(k==0)
                    {
                        printf("case %d:",flag);
                        printf("%.0f,%.0f,%d",x,y,j);
                    }
                    else
                        printf(";%.0f,%.0f,%d",x,y,j);
                    k++;
                }
            }
        }
        if (k==0)
            printf("case %d:No pythagorean triple",flag);
        printf("\n");
        k=0;
        flag++;
    }
    return 0;
}
/**************************************************************
	Problem: 1226
	User: 202001060915
	Language: C
	Result: Accepted
	Time:388 ms
	Memory:756 kb
****************************************************************/

