#include <stdio.h>
int main()
{
        double c;
        int a,i=0,j=1;
        double b;
        scanf("%d",&a);
        int aa=a;
        b=a*a;
        do
        {
            a=a/10;
            i++;
        }
        while(a!=0);

        for(; j<=i; j++)
        {
            b=1.0*b/10;
        }
        c=b-(int)b;
        for(j=1; j<=i; j++)
        {
            c=1.0*c*10;
        }
        c=(int)c;
        if(c==aa)
            puts("YES");
        else
            puts("NO");
    return 0;
}

/**************************************************************
	Problem: 2118
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

