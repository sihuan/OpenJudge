#include<stdio.h>
int gcd(int a,int b)
{
    int result,temp;
    if(a==0&&b==0)
    {
        return 0;
    }
    else if(a==0&&b!=0)
    {
        return b;
    }
    else if(a!=0&&b==0)
    {
        return a;
    }
    else
    {
    if(a%b==0||b%a==0)
    {
        return a<=b?a:b;
    }
    else
    {
        if(b>a)
        {
           temp=a;
            a=b;
            b=temp;
        }
        while(a>b)
        {
            a=a-b;
            if(a==0)
            {
                return b;
                break;
            }
            else
            {
                if(a<b)
                {
                    temp=a;
                    a=b;
                    b=temp;
                }
                else if(a==b)
                {
                    return a;
                    break;
                }
                else
                    continue;

            }

        }

    }
    }

}
int lcm(int a,int b)
{
    if(a==0||b==0)
        return 0;
    else
        return(a*b/gcd(a,b));
}

int main()
{
    int a, b;
    while(scanf("%d %d", &a, &b) != EOF)
        printf("%d %d\n", gcd(a, b), lcm(a, b));
    return 0;
}
/**************************************************************
	Problem: 1228
	User: 201801020908
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

