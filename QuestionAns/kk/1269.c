#include<stdio.h>
int main()
{
    int a,b,sum=0;
    scanf("%d%d",&a,&b);
    int t;
    if(a>b)
    {
       t=a;
       a=b;
       b=t;
    }
    if(b<12)
    {
         printf("%d",sum);
         return 0;
    }

    while(b>=12)
    {
        if(a%12==0)
        {
            sum+=a;
            a+=12;
            break;
        }

        a++;
    }
    while(a<=b)
    {
        sum+=a;
        a+=12;
    }
    printf("%d",sum);
}
/**************************************************************
	Problem: 1269
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

