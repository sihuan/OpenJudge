#include <stdio.h>
#include <string.h>
int main()
{
    int a,b,i,s;
    while (scanf("%d",&a) != EOF){
        for (i=0,s=0;i<a;i++){
            scanf("%d",&b);
            s += b;
        } 
    printf("%d\n",s);
    }
}
/**************************************************************
	Problem: 1042
	User: 201901060610
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

