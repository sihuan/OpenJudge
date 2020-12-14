#include <stdio.h>

char a[30009];
char b[30009];
char temp[10000];

int f(char x,int n)
{
    int i;
    for(i=0;i<n;++i)
    {
        if(x==temp[i]) return 0;
    }
    return 1;
}

int main()
{
    int i,k;
    gets(a);
    while(~scanf("%s",b))
    {
        int n=0;
        i=0;k=0;
        while(1)
        {
            if(a[i]==0) break;
            if(a[i]=='_') {++i;continue;}
            if(b[k]=='_') {++k;continue;}
            if(a[i]==b[k]) {++i;++k;continue;}
            if(a[i]!=b[k])
            {
                char x;
                if(a[i]>='a'&&a[i]<='z') x=a[i]-'a'+'A';
                else x=a[i];
                if(f(x,n))
                {
                    temp[n]=x;
                    ++n;
                }
                ++i;
            }
        }
        int ik;
        for(ik=0;ik<n;++ik) printf("%c",temp[ik]);
        puts("");
    }
}

/**************************************************************
	Problem: 2047
	User: 201601160202
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:816 kb
****************************************************************/

