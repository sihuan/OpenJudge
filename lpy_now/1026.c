
#include <stdio.h>
int main()
{
    int a,b;
    char i;
    while(1)
    {scanf ("%d%c%d",&a,&i,&b);
    if(a==0&&b==0&&i==32)
        break;
    else
   {switch(i)
    {
        case '+':printf("%d\n",a+b);break;
        case '-':printf("%d\n",a-b);break;
        case '*':printf("%d\n",a*b);break;
        case '/':printf("%d\n",a/b);break;
        case '%':printf("%d\n",a%b);break;
        default:printf("invalid op\n");
    }
    }
    }
}

/**************************************************************
	Problem: 1026
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

