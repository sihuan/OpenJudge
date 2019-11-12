#include<stdio.h>
int main()
{
    int n,a,b,c,i;
    scanf("%d",&n);
    scanf("%d",&c);
    a = c;
    b = c;
    for (i=1;i<n;i++){
        scanf("%d",&c);
        if (c>a)
            a = c;
        if (c<b)
            b = c;
    }
    printf("The maximum number is %d.\n",a);
    printf("The minimum number is %d.\n",b);
}

/**************************************************************
	Problem: 1024
	User: 201901060610
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

