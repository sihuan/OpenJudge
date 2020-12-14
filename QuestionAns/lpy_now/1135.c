#include<stdio.h>
#include<math.h>
#include<string.h>
#define MAX_STR_LEN 10
int strToInt(char str[])
{
    int i,j,s=0,a[11],l,n=0;
    l=strlen(str);
    for(i=0;i<l;i++)
        {
            if(str[i]>47&&str[i]<58)
            {
                a[n]=str[i]-48;
                n++;
            }
        }
    for(j=0;j<n;j++)
        s+=a[j]*pow(10,n-j-1);
    if(str[0]=='+'||(str[0]>47&&str[0]<58))
        return s;
    else if(str[0]=='-')
        return s*(-1);
    else if(str[0]==0)
        return 0;
    else
        return s;
}

int main()
{
    char s[MAX_STR_LEN];
    while(gets(s) != NULL)
        printf("%d\n", strToInt(s));
    return 0;
}
/**************************************************************
	Problem: 1135
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:760 kb
****************************************************************/

