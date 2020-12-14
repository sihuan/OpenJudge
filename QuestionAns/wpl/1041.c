#include <stdio.h>

int main()

{
    int a,b,c,d,e,f;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(a==0&&b!=0)
            printf("%d %d\n",b,a);
        else if(a!=0&&b==0)
            printf("%d %d\n",a,b);
        else
        {
            if(a<b)
            {
                e=a;
                a=b;
                b=e;
            }
            d=a*b;
            c=a%b;
            while(c!=0)
            {
                a=b;
                b=c;
                c=a%b;
            }
            f=d/b;
            printf("%d %d\n",b,f);
        }
    }
    return 0;
}
/**************************************************************
	Problem: 1041
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

