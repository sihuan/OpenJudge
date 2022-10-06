#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n<=100&&n>=90)
            printf("Excellent\n");
        else if(n<=89&&n>=80)
            printf("Good\n");
        else if(n<=79&&n>=70)
            printf("Average\n");
        else if(n<=69&&n>=60)
            printf("Pass\n");
        else if(n<=59&&n>=0)
            printf("Failing\n");
        else
            printf("Error\n");

    }


}

/**************************************************************
	Problem: 1025
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

