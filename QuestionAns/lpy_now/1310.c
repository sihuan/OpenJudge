#include<stdio.h>
int main()
{
    int n,i,year,month,day,t,y;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d-%d-%d",&year,&month,&day);
        if(month==2&&day==29)//4年过一次生日
        {
            printf("-1\n");
        }
        else
        {
            t=0;
            if(month>=3)//大于二月，后一年的天数决定一岁的天数
            {
                for(y=year+1;y<=year+18;y++)
                {
                    if((y%4==0&&y%100!=0)||y%400==0)
                    {
                        t=t+366;
                    }
 
                    else
                    {
                        t=t+365;
                    }
                }
            }
            else if(month<=2)//小于等于二月，这一年的天数决定一岁的天数
            {
                for(y=year;y<=year+17;y++)
                {
                    if((y%4==0&&y%100!=0)||y%400==0)
                    {
                        t=t+366;
                    }
                    else
                    {
                        t=t+365;
                    }
                }
            }
            printf("%d\n",t);
        }
 
    }
}
/**************************************************************
	Problem: 1310
	User: 201901061011
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

