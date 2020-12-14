#include <stdio.h>
#include <stdlib.h>
int main()
{
    int cnt1,cnt2,cnt3,cnt4,cnt5;
    cnt1=cnt2=cnt3=cnt4=cnt5=0;
    int n,j=0,a[1000],i=0,b[1000],c[1000],d[1000],e[1000],f[1000];
    while(scanf("%d",&a[i])!=EOF)
    {
        i++;
    }
    for(j=0; j<i; j++)
    {
        if(a[j]>=90&&a[j]<=100)
        {
            b[cnt1]=a[j];
            cnt1++;
        }
        if(a[j]>=80&&a[j]<=89)
        {
            c[cnt2]=a[j];
            cnt2++;
        }
        if(a[j]>=70&&a[j]<=79)
        {
            d[cnt3]=a[j];
            cnt3++;
        }
        if(a[j]>=60&&a[j]<=69)
        {
            e[cnt4]=a[j];
            cnt4++;
        }
        if(a[j]>=0&&a[j]<=59)
        {
            f[cnt5]=a[j];
            cnt5++;
        }
    }
    printf("Excellent : %d\n",cnt1);
    for(i=0; i<cnt1; i++)
    {
        if(i==0)
            printf("%d",b[i]);
        else
            printf(", %d",b[i]);
    }
    if(cnt1!=0)
        putchar('\n');
    printf("Good : %d\n",cnt2);
    for(i=0; i<cnt2; i++)
    {
        if(i==0)
            printf("%d",c[i]);
        else
            printf(", %d",c[i]);
    }
    if(cnt2!=0)
        putchar('\n');
    printf("Average : %d\n",cnt3);
    for(i=0; i<cnt3; i++)
    {
        if(i==0)
            printf("%d",d[i]);
        else
            printf(", %d",d[i]);
    }
    if(cnt3!=0)
        putchar('\n');
    printf("Pass : %d\n",cnt4);
    for(i=0; i<cnt4; i++)
    {
        if(i==0)
            printf("%d",e[i]);
        else
            printf(", %d",e[i]);
    }
    if(cnt4!=0)
        putchar('\n');
    printf("Failing : %d\n",cnt5);
    for(i=0; i<cnt5; i++)
    {
        if(i==0)
            printf("%d",f[i]);
        else
            printf(", %d",f[i]);
    }
    if(cnt5!=0)
        putchar('\n');
    return 0;
}

/**************************************************************
	Problem: 1177
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

