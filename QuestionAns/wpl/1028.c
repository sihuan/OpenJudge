#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x,y;
    double a,b,c,d,e;
    scanf("%c->%c",&x,&y);
    if(x=='F'&&y=='C')
    {
        scanf("%lf",&a);
        scanf("%lf",&b);
        scanf("%lf",&c);
        d=a;
        printf("   F  ->    C\n");
        while(d<=b+0.01)
        {
            e=(double)5/9*(d-32);
            printf("%5.1lf -> %5.1lf\n",d,e);
            d=d+c;
        }
    }
    else if(x=='C'&&y=='F')
    {
        scanf("%lf",&a);
        scanf("%lf",&b);
        scanf("%lf",&c);
        d=a;
        printf("   C  ->    F\n");
        while(d<=b+0.01)
        {
            e=(double)9/5*d+32;
            printf("%5.1lf -> %5.1lf\n",d,e);
            d=d+c;
        }

    }
    return 0;
}

/**************************************************************
	Problem: 1028
	User: 201901060819
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

