#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    char c;
    while(scanf("%d%c%d",&a,&c,&b)!=EOF)
    {
        if(a==0&&b==0&&c==' ')
            exit(0);
        else
        {
            switch(c)
            {
                case'+':printf("%d\n",a+b);break;
                case'-':printf("%d\n",a-b);break;
                case'*':printf("%d\n",a*b);break;
                case'/':printf("%d\n",a/b);break;
                case'%':printf("%d\n",a%b);break;
                default:printf("invalid op\n");
            }
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1026
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

