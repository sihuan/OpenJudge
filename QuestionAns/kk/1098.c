#include<stdio.h>
int main()
{
    int n;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
            break;
        if(n%10==1)
            printf("%dst\n",n);
        else if(n%10==2)
            printf("%dnd\n",n);
        else if(n%10==3)
            printf("%drd\n",n);
        else
            printf("%dth\n",n);
    }
}

/**************************************************************
	Problem: 1098
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

