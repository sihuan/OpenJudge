#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        switch(n)
        {
        case 90 ... 100 :
            puts("Excellent");
            break;
        case 80 ... 89 :
            puts("Good");
            break;
        case 70 ... 79 :
            puts("Average");
            break;
        case 60 ... 69 :
            puts("Pass");
            break;
        case 0 ... 59 :
            puts("Failing");
            break;
        default:
            puts("Error");
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1025
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

