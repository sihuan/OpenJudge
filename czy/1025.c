#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0;
    while(scanf("%d",&n)!=EOF)
    {
        if(n<0 || n>100)
        {
            printf("Error\n");
            continue;
        }
        if(n>=0 && n<60)
        {
        printf("Failing\n");
        continue;
        }
        switch (n/10)
     {
        case 10 : printf("Excellent\n");break;
        case 8 : printf("Good\n");break;
        case 9 : printf("Excellent\n"); break;
        case 7 : printf("Average\n"); break;
        case 6 : printf("Pass\n"); break;
     }
    }

    return 0;
}

/**************************************************************
	Problem: 1025
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

