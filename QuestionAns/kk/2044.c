#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char inp[1000];
    int sum=0;
    int x;
    scanf("%d",&x);
    while(scanf("%s",inp)!=EOF)
    {
        int n=strlen(inp);
        inp[n]=0;
        int tem=0,tx;
        if(inp[0]=='-')
        {
            int i=1;
            while(inp[i]!=0)
            {
                tem=tem*10+inp[i]-48;
                i++;
            }
            sum-=tem;
        }
        else if(inp[0]=='+')
        {
            int i=1;
            while(inp[i]!=0)
            {
                tem=tem*10+inp[i]-48;
                i++;
            }
            sum+=tem;
        }
        else
        {
            int i=0;
            while(inp[i]!=0)
            {
                tx=inp[i]-48;
                tem=tem*10+tx;
                i++;
            }
            sum+=tem;
//            printf("%d",tem);
        }
    }
    if(sum<0)
        printf("Yes");
    else
        printf("No");

}

/**************************************************************
	Problem: 2044
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

