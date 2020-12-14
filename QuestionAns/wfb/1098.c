#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    while(scanf("%d",&n) && n)
    {
        int x = n%10;
        printf("%d",n);
        switch(x)
        {
        case 1:
            printf("st\n");
            break;
        case 2:
            printf("nd\n");
            break;
        case 3:
            printf("rd\n");
            break;
        default:
            printf("th\n");
            break;
        }
    }

    return 0;
}

/**************************************************************
	Problem: 1098
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

