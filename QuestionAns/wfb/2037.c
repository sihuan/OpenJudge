#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,x;
    char ch;
    int ans = 0;
    while(scanf("%d",&n) != EOF)
    {
        ans = 0;
        ans += n;
        while(scanf("%c",&ch))
        {
            if(ch == '+')
            {
                scanf("%d",&x);
                ans += x;
            }
            else if(ch == '-')
            {
                scanf("%d",&x);
                ans -= x;
            }
            else if(ch == '=')
            {
                printf("%d\n",ans);
                break;
            }

        }
    }

    return 0;
}

/**************************************************************
	Problem: 2037
	User: 201601011420
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

