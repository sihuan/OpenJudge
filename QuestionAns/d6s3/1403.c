#include<stdio.h>
#include<math.h>
int main()
{
    int a,b=0;
    scanf("%d",&a);
    if (a>0){
        if (a%2==0){
            if (sqrt(a)==(int)sqrt(a)){
                printf("yes");
                b=1;
            }
        }
    }
    if (b==0)
        printf("no");
}

/**************************************************************
	Problem: 1403
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:756 kb
****************************************************************/

