#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b;
    int cnt=0;
    int i,j,k;
    while(scanf("%d%d",&a,&b) != EOF)
    {
        ++cnt;
        printf("case %d:",cnt);
        int is=0;
        for(i=a; i<b-1; ++i)
        {
            for(j=i+1; j<b; ++j)
            {
                int k = sqrt(i*i+j*j);
                if(k<=b && i*i+j*j==k*k)
                {
                    if(is) printf(";");
                    printf("%d,%d,%d",i,j,k);
                    is = 1;
                }
            }
        }
        if(!is) printf("No pythagorean triple");
        putchar('\n');
    }
    return 0;
}

/**************************************************************
	Problem: 1226
	User: 201601011420
	Language: C
	Result: Accepted
	Time:380 ms
	Memory:756 kb
****************************************************************/

