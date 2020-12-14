#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n=0;
    scanf("%d",&n);
    int a,b,c,d,e,f,g,h;
    a=5;
    b=10;
    c=20;
    d=100;
    for(e=0;e<=d;++e)
    {
        for(f=0;f<=c;++f)
        {
            for(g=0;g<=b;++g)
            {
                for(h=0;h<=a;++h)
                {
                    if(20*h+10*g+5*f+1*e==100-n)
                    {
                        printf("$20 bills: %d\n",h);
                        printf("$10 bills: %d\n",g);
                        printf(" $5 bills: %d\n",f);
                        printf(" $1 bills: %d\n",e);
                        return 0;
                    }
                }
            }
        }
    }
    return 0;
}








/**************************************************************
	Problem: 1013
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

