#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
    double cm,kg,m,bmi;
    while(scanf("%lf %lf",&cm,&kg)!=EOF)
    {
        m=cm/100;
    bmi=kg/(m*m);
    if(bmi<19)
    {
        printf("%.2lf",bmi);
        printf(" lower\n");
    }
    else if(bmi<25&&bmi>=19)
    {
        printf("%.2lf",bmi);
        printf(" health\n");
    }
    else if(bmi<30&&bmi>=25)
    {
        printf("%.2lf",bmi);
        printf(" heavy\n");
    }
    else if(bmi<40&&bmi>=30)
    {
        printf("%.2lf",bmi);
        printf(" super heavy\n");
    }
    else
    {
        printf("%.2lf",bmi);
        printf(" extra heavy\n");
    }
    }



    return 0;
}

/**************************************************************
	Problem: 1219
	User: 201801020908
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

