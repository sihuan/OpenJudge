#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main()
{
    int n,i,j,k,m=0,low=1,highest,higher,temp;
    scanf("%d",&n);
    printf("Sun Mon Tue Wen Thu Fri Sat\n");
    while(1)
    {
        for(k=1;k<=7;++k)
        {
            if(n==7) m=n;
            if(m<n)
            {
                    printf("   ");
                    m++;
            }
            else
            {
                    printf("%3d",low);
                    low++;
                    if(low>30) { printf("\n");return 0;}
            }

           if(k!=7) printf(" ");

        }
        printf("\n");
    }
    return 0;
}



/**************************************************************
	Problem: 1100
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

