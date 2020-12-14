#include <stdio.h>
#include <string.h>

int a[13];

int Jyear(int year)
{
    if((year%4==0 && year%100!=0) || year % 400==0)
        return 1;
    return 0;
}

int main()
{
    a[1]=31;
    a[2]=28;
    a[3]=31;
    a[4]=30;
    a[5]=31;
    a[6]=30;
    a[7]=31;
    a[8]=31;
    a[9]=30;
    a[10]=31;
    a[11]=30;
    a[12]=31;
    int temp=0,n=0,m=0,sum=0,i,j,k;
    scanf("%d",&n);
    int year=0,month=0,day=0;
    for(k=0;k<n;++k)
    {
        scanf("%d-%d-%d",&year,&month,&day)!=EOF;
        if(Jyear(year)==1) a[2]=29;
        else a[2] =28;
        sum=0;
        if(a[month]<day)
        {
            printf("error date!\n");
            continue;
        }
        for(i=1;i<month;++i)
    {
        sum=sum+a[i];
    }
    printf("%d\n",sum+day);

   }
}

/**************************************************************
	Problem: 1101
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

