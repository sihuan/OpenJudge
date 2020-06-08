#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX_STR_LEN 111
int change(char str[],int x,int base)
{
    int i,j=1,s=0;
    for(i=x;i>=0;i--)
    {
        if(str[i]>=48&&str[i]<=base+47)
        {
            s+=(str[i]-48)*pow(base,j-1);
            j++;
        }
    }
    return s;
}
int SIXTEEN(char str[],int x)
{
    int i,j=1,s=0;
    for(i=x;i>=0;i--)
    {
        if((str[i]>='0'&&str[i]<='9')||(str[i]>='A'&&str[i]<='F')||(str[i]>='a'&&str[i]<='f'))
        {
            if(str[i]>='0'&&str[i]<='9')
            {
                s+=(str[i]-48)*pow(16,j-1);
                j++;
            }
            else if (str[i]>='A'&&str[i]<='F')
            {
                s+=(str[i]-55)*pow(16,j-1);
                j++;
            }
            else
            {
                s+=(str[i]-87)*pow(16,j-1);
                j++;
            }
        }
    }
    return s;
}
int strToInt(char str[], int base)
{
    int n,i,j=0,m,k=1,s=0;
    char hold[105];
    n=strlen(str);
    if(n==0)
        return 0;
    else
    {
        for(i=0;i<n;i++)
        {

            if(str[i]>='0'&&str[i]<='9')
            {
                hold[j]=str[i];
                j++;
            }
            hold[j]='\0';
        }
        j--;
        if(base==10||base==2||base==8)
            s=change(hold,j,base);
        else if(base==16)
            s=SIXTEEN(str,n);
        if(str[0]=='-')
            return -s;
        else
            return s;
    }
}


int main()
{
    int base;
    char s[MAX_STR_LEN];
    while( (scanf("%d:", &base) != EOF) && (gets(s) != NULL) )
        printf("%d\n", strToInt(s, base));
    return 0;
}

/**************************************************************
	Problem: 1136
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:760 kb
****************************************************************/

