#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define MAX_STR_LEN 100
double strToDouble(char *a)
{
    int i=0,k=0;
    double x=0.0,x2=0.0;
    double n=0.1;
    int flag=0;
    if(a[0]=='-')
    {
        flag=1;
        i=1;
    }
    else if(a[0]=='+')
    {
        i=1;
    }
    int l=strlen(a);
    int kl;
//    for(kl=0;kl!=0;++kl)
//    {
//        if(kl+1<l&&a[kl]=='-'&&a[kl+1]<='9'&&a[kl+1]>=0) flag=1;
//    }
    while(a[k++]!='.')
    {
        if(k==l) break;
    }
  //  --k;
  int xx=0;
    for(i;i<k;++i)
    {
        if(a[i]>='0' && a[i]<='9')
        {
            if(xx==0&&flag==0&&i-1>=0&&a[i-1]=='-') flag=1;
            x=x*10+(a[i]-'0');
            ++xx;
        }
    }
    for(i=k;i<l;++i)
    {

        if(a[i]>='0' && a[i]<='9')
        {
            x2=x2+(a[i]-'0')*n;
            n=n*0.1;
        }
    }
    double sum=x+x2;
    if(flag==1) sum=sum*(-1);
    return sum;
}



int main()
{
    char s[MAX_STR_LEN];
    while(gets(s) != NULL)
        printf("%lg\n", strToDouble(s));
    return 0;
}
/**************************************************************
	Problem: 1188
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

