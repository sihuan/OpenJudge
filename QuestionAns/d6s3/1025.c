#include<stdio.h>
int main()
{
    int a;
    while (scanf("%d",&a) != EOF)
    {
        if (a>100 || a<0)
            printf("Error\n");
        else{
            a/=10;
            switch (a)
            {
            case 10:
                printf("Excellent\n");
                break;
            case 9:
                printf("Excellent\n");
                break;
            
            case 8:
                printf("Good\n");
                break;
            
            case 7:
                printf("Average\n");
                break;

            case 6:
                printf("Pass\n");
                break;

            default:
                printf("Failing\n");
                break;
            }
        }
    }
}
/**************************************************************
	Problem: 1025
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

