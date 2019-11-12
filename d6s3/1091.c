#include<stdio.h>
int main()
{
    int a,b,c,i=0;
    scanf("start = %d, step = %d, end = %d",&a,&b,&c);
    while (1){
        if (i==0){
            printf("%d",a);
            a += b;
        }
        if (b>0){
            if (a <= c){
                printf(" %d",a);
            }
            if (a > c){
                break;
            }
            a += b;
        i++;
        }
        else{
            if (a >= c){
                printf(" %d",a);
            }
            if (a < c){
                break;
            }
            a += b;
        i++;
        }
    }
}

/**************************************************************
	Problem: 1091
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

