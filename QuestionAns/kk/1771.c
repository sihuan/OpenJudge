#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        printf("%d=",n);
        while(n%2==0)
        {
            printf("2");
            n/=2;
            if(n!=1)
                putchar('*');
        }
        for(int i=3;i<=(int)sqrt((double)n);i+=2)
        {
            while(n%i==0)
                {
                    printf("%d",i);
                    n/=i;
                    if(n!=1)
                        putchar('*');
                }
        }
        if(n!=1)
            printf("%d",n);
        printf("\n");
    }
}

/**************************************************************
	Problem: 1771
	User: 202001060117
	Language: C
	Result: Accepted
	Time:200 ms
	Memory:756 kb
****************************************************************/

