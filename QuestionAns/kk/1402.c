#include<stdio.h>
int main()
{
    int a,b,c,d=0;
    scanf("%d%d%d",&a,&b,&c);
    if((a<=100)&&(a>0)&&(b<=100)&&(b>0)&&(c<=100)&&(c>0))
    {
        if(a%2==0)
            d+=a;
        else if(a%2==1)
            {
                a=a+1;
                d+=a;
            }
        if(b%2==0)
            d+=b;
        else if(b%2==1)
            {
                b=b+1;
                d+=b;
            }
        if(c%2==0)
            d+=c;
        else if(c%2==1)
            {
                c=c+1;
                d+=c;
            }
        printf("%d",d);

    }
    else ;
}
/**************************************************************
	Problem: 1402
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

