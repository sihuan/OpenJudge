#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a;
    int b;
    while(scanf("%lf",&a)!=EOF)
    { b=a/10;
        if(a<0||a>100)
     printf("Error\n");
     else
    {
            switch(b)
    {
     case 0:printf("Failing\n");break;
     case 1:printf("Failing\n");break;
     case 2:printf("Failing\n");break;
     case 3:printf("Failing\n");break;
     case 4:printf("Failing\n");break;
     case 5:printf("Failing\n");break;
     case 6:printf("Pass\n");break;
     case 7:printf("Average\n");break;
     case 8:printf("Good\n");break;
     case 9:printf("Excellent\n");break;
     case 10:printf("Excellent\n");break;
    }
         }
    }
    return 0;
}
/**************************************************************
	Problem: 1025
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

