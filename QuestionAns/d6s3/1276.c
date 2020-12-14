#include<stdio.h>
#define MAX_SIZE 1001

int printstar(int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("*");
}

int printspace(int n)
{
    int i;
    for(i=0;i<n;i++)
        printf(" ");
}

int print_graphic(int n)
{
    int i;
    printstar(n);
    printf("\n");
    for(i=1;i<n/2;i++){
        printstar((n/2)-i+1);
        printspace(2*i-1);
        printstar((n/2)-i+1);
        printf("\n");
    }
    printstar(1);
    printspace(n-2);
    printstar(1);
    printf("\n");
    for(i--;i>=1;i--){
        printstar((n/2)-i+1);
        printspace(2*i-1);
        printstar((n/2)-i+1);
        printf("\n");
    }
    printstar(n);
    printf("\n");
}

int main()
{
    int num;
    scanf("%d", &num);
    print_graphic(num);
    return 0;
}
/**************************************************************
	Problem: 1276
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

