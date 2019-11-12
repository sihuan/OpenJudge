#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (a>b){
        if (a>c){
            if (b>c){
                printf("%d %d %d",c,b,a);
            }
            else
                printf("%d %d %d",b,c,a);
        }
        else
            printf("%d %d %d",b,a,c);
    }
    else{
        if (a>c)
            printf("%d %d %d",c,a,b);
        else{
            if (b>c)
                printf("%d %d %d",a,c,b);
            else
                printf("%d %d %d",a,b,c);
        }

    }
}

/**************************************************************
	Problem: 1018
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

