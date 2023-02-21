#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>


char a[109];

int sum2(int k)
{
    int u,ne=1,s=0;
    for(u=k-1;u>=0;--u)
    {
        s=s+(a[u]-'0')*ne;
        ne=ne*10;
    }
    return s;
}

int sum3(int k,int m)
{
    int u,ne=1,s=0;
    for(u=k-1;u>m;--u)
    {
        s=s+(a[u]-'0')*ne;
        ne=ne*10;
    }
    return s;
}
int main()
{

    while(gets(a)!=NULL)
    {
        int sum[10],m=0,i,k;
        int l=strlen(a);
        int flag3=0;
        for(i=0; i<l; ++i)
        {
            if(a[i]=='.' || (a[i]<='9' && a[i]>='0'));
            else
            {
               // printf("NO\n");
                flag3=1;
            }
            if(a[i]=='.')
            {
                sum[m]=i;
                ++m;
            }
        }
        if(flag3==1)
        {
            printf("NO\n");
            continue;
        }
        if(m!=3)
        {
            printf("NO\n");
            continue;
        }
        if(sum[1]-sum[0]<=4&&sum[1]-sum[0]>=2 && sum[0]>=1 && sum[0]<=3 && sum[2]-sum[1]<=4&&sum[2]-sum[1]>=2 && l-sum[2]>=2 &&l-sum[2]<=4);
            else
            {
            printf("NO\n");
            continue;
        }
        int flag=0;
        int v=0;
        for(k=0;k<=3;++k)
        {
            if(k==0)  v=sum2(sum[k]);
            else if(k==3) v=sum3(l,sum[2]);
            else v=sum3(sum[k],sum[k-1]);
            if(v>=0 && v<=255) flag++;
        }
        if(flag==4) printf("YES\n");
        else printf("NO\n");
    }

}


/**************************************************************
	Problem: 1301
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

