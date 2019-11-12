#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    int n,i=1;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        while(scanf("%d %d %d",&a,&b,&c)!=EOF)
            if(a<=b&&b<=c)
            {
                if(a+b>c)
                    printf("YES\n");
                else
                    printf("NO\n");
            }
            else if(a<=c&&c<=b)
            {
                if(a+c>b)
                    printf("YES\n");
                else
                    printf("NO\n");
            }
            else if(b<=a&&a<=c)
            {
                if(a+b>c)
                    printf("YES\n");
                else
                    printf("NO\n");
            }
            else if(b<=c&&c<=a)
            {
                if(c+b>a)
                    printf("YES\n");
                else
                    printf("NO\n");
            }
            else if(c<=a&&a<=b)
            {
                if(a+c>b)
                    printf("YES\n");
                else
                    printf("NO\n");
            }
            else
            {
                if(b+c>a)
                    printf("YES\n");
                else
                    printf("NO\n");
            }
    }
return 0;
}

/**************************************************************
	Problem: 1079
	User: 201901060819
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

