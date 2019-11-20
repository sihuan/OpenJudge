#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,s;
    int n;
    scanf("%d",&n);
    printf("Sun Mon Tue Wen Thu Fri Sat\n");
    if(n==7)
    {
        for(i=1; i<=7; i++)
        {
            printf("%3d",i);
            if(i!=7)
                printf(" ");
        }
        printf("\n");
        for(i=8; i<=14; i++)
        {
            printf("%3d",i);
            if(i!=14)
                printf(" ");
        }
        printf("\n");
        for(i=15; i<=21; i++)
        {
            printf("%3d",i);
            if(i!=21)
                printf(" ");
        }
        printf("\n");
        for(i=22; i<=28; i++)
        {
            printf("%3d",i);
            if(i!=28)
                printf(" ");
        }
        printf("\n");
        for(i=29; i<=30; i++)
        {
            printf("%3d",i);
            if(i!=30)
                printf(" ");
        }
    }
    else
    {
        for(i=1; i<=4*n; i++)
        {
            printf(" ");
        }
        s=1;
        for(j=7-n; j<=50; j+=7)
        {
            if(i==30)
            {break;}
            for(i=s; i<=j; i++)
            {
                if(i==30)
                {
                    printf("%3d",i);
                    break;
                }
                else if(i!=j)
                {
                    printf("%3d",i);
                    printf(" ");
                }
                s=j+1;
                if(i==j)
                {
                    printf("%3d",i);
                    printf("\n");
                    break;
                }
            }
        }
    }
    return 0;
}
/**************************************************************
	Problem: 1100
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

