#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if (a%100 == 0){
        if (a%400 == 0)
            printf("Yes");
        else
            printf("No");
    }
    else
        if (a%4 == 0)
            printf("Yes");
        else
            printf("No");
}

/**************************************************************
	Problem: 1010
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

