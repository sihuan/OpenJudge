#include<stdio.h>

int main()
{
    char A,B;
    double i,x,s;
    int h,l,t;
    scanf("%c->%c",&A,&B);
    scanf("%d",&h);
    scanf("%d",&l);
    scanf("%lf",&s);
    t=l;
    l=(l<h?l:h);
    h=(t<h?h:t);
    if(A=='C'&&B=='F')
    {
        for(i=l;i<=h+0.01;i+=s)
        {
            x=i*9.0/5.0+32.0;
            if(i==l)
                printf("   C  ->    F\n");
            printf("%5.1f -> %5.1f\n",i,x);
        }
    }
    else if(A=='F'&&B=='C')
    {
        for(i=l;i<=h+0.01;i+=s)
        {
            x=(i-32.0)*5.0/9.0;
            if(i==l)
                printf("   F  ->    C\n");
            printf("%5.1f -> %5.1f\n",i,x);
        }
    }
    return 0;
}
/**************************************************************
	Problem: 1028
	User: 202001060915
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

