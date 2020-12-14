#include <stdio.h>
#define MAX_STR_LEN 15
double strToDouble(char str[])
{
    int i,j,k=0,n,p;
    double l,m;
    char c[15];
    for(i=0,j=1;str[i]!='\0';i++)
    {
        if(str[i]=='.'||(str[i]>='0'&&str[i]<='9'))
        {
            if((str[i]>='0'&&str[i]<='9'))
            {
                c[j]=str[i];
                j++;
            }
            else
            {
                c[j]=str[i];
                k=j;//小数点在c[k]
                j++;
                break;
            }
        }
        c[j]='\0';
    }
    if(k!=0)
    {
        for(;str[i]!='\0';i++)
        {
            if(str[i]>='0'&&str[i]<='9')
                {
                    c[j]=str[i];
                    j++;
                }
        }
        c[j]='\0';
    }

    if(j==1)
        return 0;
    else
    {
        n=j-1;//最后的数字在c[n]
        l=1;
        m=0;
        if(k!=0)
            p=k-1;
        else
            p=n;
        for(j=p;j>=1;j--)
        {
            m+=(c[j]-48)*l;
            l=l*10;
        }
        if(k!=0)
        {
            l=0.1;
            for(j=k+1;j<=n;j++)
            {
                m+=(c[j]-48)*l;
                l=l/10;
            }
        }

        if(str[0]=='-')
            return -m;
        else
            return m;
    }

}


int main()
{
    char s[MAX_STR_LEN];
    while(gets(s) != NULL)
        printf("%lg\n", strToDouble(s));
    return 0;
}
/**************************************************************
	Problem: 1137
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

