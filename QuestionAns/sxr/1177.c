#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,j,e=0,g=0,a=0,p=0,f=0;
    int x[1000];
    int o[1000];
    int v[1000];
    int s[1000];
    int l[1000];
    while(scanf("%d",&n)!=EOF)
    {
        if(n>=90&&n<=100)
        {
            e++;
            x[e]=n;
        }
        else if(n>=80&&n<90)
        {
            g++;
            o[g]=n;
        }
        else if(n>=70&&n<80)
        {
            a++;
            v[a]=n;
        }
        else if(n>=60&&n<70)
        {
            p++;
            s[p]=n;
        }
        else if(n>=0&&n<60)
        {
            f++;
            l[f]=n;
        }
    }
    printf("Excellent : %d\n",e);
    for(j=1; j<=e; j++)
    {
        if(j==1)
            printf("%d",x[j]);
        else
            printf(", %d",x[j]);
    }
    if(j>1)
        printf("\n");
    printf("Good : %d\n",g);
    for(j=1; j<=g; j++)
    {
        if(j==1)
            printf("%d",o[j]);
        else
            printf(", %d",o[j]);
    }
    if(j>1)
        printf("\n");
    printf("Average : %d\n",a);
    for(j=1; j<=a; j++)
    {
        if(j==1)
            printf("%d",v[j]);
        else
            printf(", %d",v[j]);
    }
    if(j>1)
        printf("\n");
    printf("Pass : %d\n",p);
    for(j=1; j<=p; j++)
    {
        if(j==1)
            printf("%d",s[j]);
        else
            printf(", %d",s[j]);
    }
    if(j>1)
        printf("\n");
    printf("Failing : %d\n",f);
    for(j=1; j<=f; j++)
    {
        if(j==1)
            printf("%d",l[j]);
        else
            printf(", %d",l[j]);
    }
    if(j>1)
        printf("\n");
    return 0;
}
/**************************************************************
	Problem: 1177
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

