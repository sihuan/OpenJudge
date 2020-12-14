#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<string.h>
#define MAXN 5000 + 10
char buf[MAXN],s[MAXN];
int p[MAXN];

int main()
{
        int n,m=0;
        int i;
        int count=0;
        while(gets(buf))
        {
            n=strlen(buf);
            if(n==0)
                return 0;
            for(i=0; i<n; i++)
            {
                if(isalnum(buf[i]))s[m++]=toupper(buf[i]);
            }
            if(m==1)
                printf("Yes.\n");
            else
            {
                for(i=0;i<m;i++)
                {
                    if(s[i]==s[m-i-1])
                        count++;
                }
                if(count==m)
                    printf("Yes.\n");
                else
                    printf("No.\n");
            }
            m=0;
            count=0;
        }

   return 0;
}
/**************************************************************
	Problem: 1061
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:776 kb
****************************************************************/

