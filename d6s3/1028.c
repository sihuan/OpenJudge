#include <stdio.h>
int main()
{
    double l,g,s,f,c,i;
    char a,b;
    scanf("%c->%c",&a,&b);
    if(a=='C' && b=='F')
    {
        scanf("%lf%lf%lf",&l,&g,&s);
        printf("   C  ->    F\n");
        for(i=l; i<=g+0.01; i+=s)
        {
            f=(i*9/5)+32;
            printf("%5.1lf -> %5.1lf\n",i,f);
        }
    }
    else
    {
        scanf("%lf%lf%lf",&l,&g,&s);
        printf("   F  ->    C\n");
        for(i=l; i<=g+0.01; i+=s)
        {
            c=(i-32)*5/9;
            printf("%5.1lf -> %5.1lf\n",i,c);
        }
    }
}

/**************************************************************
	Problem: 1028
	User: 201901060610
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

