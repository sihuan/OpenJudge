#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,i;
    scanf("start = %d, step = %d, times = %d",&a,&b,&c);
    for (i=0;i<c;i++){
        if (i==0){
            printf("%d",a);
            a += b;
        }
        else{
            printf(" %d",a);
            a += b;
        }
    }
}

/**************************************************************
	Problem: 1090
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

