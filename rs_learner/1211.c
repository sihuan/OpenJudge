#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
    char s[31];
    char c;
    double a,money=0;
    while(scanf("%s%lf",s,&a)!=EOF)
    {
        if(a<=2880)
            money=0.48*a;
        else if(a>2880&&a<=4800)
            money=(a-2880)*0.53+1382.4;
        else
            money=(a-4800)*0.78+1017.6+1382.4;
        printf("%s:",s);
        printf("%.2lf\n",money);

    }
    return 0;
}
/**************************************************************
	Problem: 1211
	User: 201801020908
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

