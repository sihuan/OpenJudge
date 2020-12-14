#include<stdio.h>
int main()
{
    int y,a,b,c,d,i;
    while(scanf("%d",&y)!=EOF)
    {
        for(i=y+1;i<=9999;i++)
    {
        a=i/1000;
        b=(i-1000*a)/100;
        c=i%100/10;
        d=i%10;
        if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)
        {
            printf("%d\n",i);
            break;
        }
    }




    }
    return 0;
}

/**************************************************************
	Problem: 1297
	User: 201801020908
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

