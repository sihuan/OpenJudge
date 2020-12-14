#include <stdio.h>
#include <string.h>
#define MAX_STR_LEN 100
int strToInt(char a[])
{
   // printf("%d",'');
    int l=strlen(a);
    if(l==0) return 0;
    int i,j,k,m=0,n=1,sum=0;
    if((a[0]>'9'|| a[0]<'0')&&a[0]!='+'&&a[0]!='-') return 0;
    else
    {
       if(a[0]=='-' || a[0]=='+') ++m;
        while(a[m]<='9'&&a[m++]>='0');
        for(i=m-1; i>=0; --i)
        {
            if(a[i]>='0' && a[i]<='9')
            {
                sum=sum+(a[i]-'0')*n;
                n=n*10;
            }
        }

    }
//    for(i=l-1;i>=0;--i)
//    {
//        if(a[i]>='0' && a[i]<='9')
//        {
//            m=m+(a[i]-'0')*n;
//            n=n*10;
//        }
//    }
if(a[0]=='-') sum=sum*-1;
    return sum;
}


int main()
{
    char s[MAX_STR_LEN];
    while(gets(s) != NULL)
        printf("%d\n", strToInt(s));
    return 0;
}
/**************************************************************
	Problem: 1134
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

