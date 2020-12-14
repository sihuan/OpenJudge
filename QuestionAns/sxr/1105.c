#include <stdio.h>
#include <stdlib.h>


int main()
{
    int x;
    //printf("你考试考了多少分?(0-100)\n");
    while(scanf("%d",&x)!=EOF)
    {
        if(x==-1)
        {
            printf("grad must between 0 and 100\n");
            break;
        }
        if(x<0||x>100)
        {
            printf("grad must between 0 and 100\n");
            continue;
        }
        switch(x/10)
        {
        case 10:case 9:
            printf("优\n");
            break;
        case 8:
            printf("良\n");
            break;
        case 7:case 6:
            printf("中\n");
            break;
        default:printf("差\n");
                break;
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1105
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

