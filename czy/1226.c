#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    int n=0,max=0,m=0,i=0,k=0;
    int first=0,end=0;
    double temp;
    while(scanf("%d%d",&first,&end)!=EOF)
    {
        n++;
        int flag=0;
        printf("case %d:",n);
        for(i=first;i<=end;++i)
        {
            for(k=i+1;k<=end;++k)
            {
                temp=sqrt(i*i+k*k);
                if((int)temp==temp && (int)temp <=end)
                {
                    flag++;
                    if(flag==1)
                    printf("%d,%d,%d",i,k,(int)temp);
                    else printf(";%d,%d,%d",i,k,(int)temp);
                }

            }
        }
        if(flag==0) printf("No pythagorean triple");
        printf("\n");
    }
}

/**************************************************************
	Problem: 1226
	User: 201601160202
	Language: C
	Result: Accepted
	Time:388 ms
	Memory:756 kb
****************************************************************/

