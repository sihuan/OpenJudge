#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if (a>=0)
        if (a<10)
            printf("%d",a);
        else{
            a = a%100;
            printf("%02d",a);
        }
    else{
        a = -a;
        if (a<10)
            printf("%d",a);
        else{
            a = a%100;
            printf("%02d",a);
        }
    }
}

/**************************************************************
	Problem: 1088
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

