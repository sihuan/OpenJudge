#include <stdio.h>
#include <stdlib.h>
#include<string.h>


int main()
{
    int a;
    while(scanf("%d",&a) != EOF)
    {
        if(a>100 || a<0) printf("Error\n");
        else if(a>=90) printf("Excellent\n");
        else if(a>=80) printf("Good\n");
        else if(a>=70) printf("Average\n");
        else if(a>=60) printf("Pass\n");
        else printf("Failing\n");
    }
    return 0;
}

/**************************************************************
	Problem: 1025
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

