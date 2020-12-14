#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0,m=0,i,j,k;
    //int sum=0;
    char a[100];
    double du;
    while(~scanf("%s %lf",a,&du))
    {
        double sum=0;
        if(du<=2880)
            {
                sum=du*0.48;
            }
            else if(du>2880 && du<=4800)
            {
                sum=2880*0.48;
                sum+=(du-2880)*(0.48+0.05);
            }
            else if(du>4800)
            {
                sum=2880*0.48;
                sum=sum+(4800-2880)*(0.48+0.05);
                sum+=(du-4800)*(0.48+0.3);
            }
            printf("%s:%0.2lf\n",a,sum);
    }

    return 0;
}

/**************************************************************
	Problem: 1211
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

