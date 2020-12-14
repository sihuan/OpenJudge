#include<stdio.h>
#include<string.h>
#include<ctype.h>

int compare(int *a,int *b,int *c)
{
    int aa=*a,bb=*b,cc=*c;
    if(aa>bb) {int temp;temp=aa;aa=bb;bb=temp;}
    if(aa>cc) {int temp;temp=aa;aa=cc;cc=temp;}
    if(bb>cc) {int temp;temp=bb;bb=cc;cc=temp;}
    *a=aa;*b=bb;*c=cc;
    return 0;
}


int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    compare(&a, &b, &c);
    printf("%d %d %d", a, b, c);
    return 0;
}
/**************************************************************
	Problem: 1241
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

