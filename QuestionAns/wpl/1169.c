#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[1001];
    int x,y,p;
    int i;
    int L;
    while(gets(a)!=NULL)
    {
        x=0;
        y=0;
        p=0;
        L=strlen(a);
        for(i=1; i<=L; i++)
        {
            if(a[i-1]>=65&&a[i-1]<=90)
            {
                x=1; 
            }
            else if(a[i-1]>=97&&a[i-1]<=122)
            {
                x=1;
            }
            else
            {
                x=0;
            }
            if(y==0&&x==1)
            {
                p=p+1;
            }
            y=x;
        }
        printf("%d\n",p);
    }
    return 0;
}
/**************************************************************
	Problem: 1169
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

