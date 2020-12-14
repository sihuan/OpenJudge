#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    if (a==0){
        printf("0");
    }
    else{
        if (a>0){
            printf("1");
            for (i=2;i<=a;i++)
                printf(" %d",i);
        }
        else{
            printf("%d",a);
            for (i=a+1;i<=-1;i++)
                printf(" %d",i);
        }
    }
}

/**************************************************************
	Problem: 1167
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

