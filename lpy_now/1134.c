#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX_STR_LEN 15
int strToInt(char str[])
{
    int n,i,j=0,m,k=1,s=0;
    int hold[20]={0};
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
            else if(i==0&&(str[i]=='+'||str[i]=='-'))
                continue;
            else
                break;
        }
        for(j=j-1;j>=0;j--)
        {
            s+=(hold[j]-48)*k;
            k=k*10;
        }
        if(str[0]=='-')
            return -s;
        else
            return s;
    }

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
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

