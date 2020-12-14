#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[31];
    double n,one,two,three;
    while(scanf("%s %lf",a,&n)!=EOF)
    {
        if(n<=2880)
            {one=0.48*n;
                    printf("%s:%.2lf\n",a,one);
                    continue;}
        if(n>2880&&n<=4800)
            {two=0.48*2880+0.53*(n-2880);
                    printf("%s:%.2lf\n",a,two);
                    continue;}
        if(n>4800)
            {three=0.48*2880+0.53*1920+0.78*(n-4800);
                    printf("%s:%.2lf\n",a,three);
                    continue;}
    }
    return 0;
}

/**************************************************************
	Problem: 1211
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

