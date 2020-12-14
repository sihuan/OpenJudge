
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int sushu(int n)
{
    int sqrtn=(int)sqrt((double)n);
    int i;
    if(n==2)//单独将2列出
        return 1;
    if(n%2==0||n==1)//若为2的倍数或1，则一定不是素数
        return 0;
    else
    {
    for(i=3; i<=sqrtn; i+=2)//所以直接对奇数进行素数判断即可
    {
        if(n%i==0)
        return 0;
    }
    }
    return 1;//0代表假，1代表真
}
int main()
{
    int x,y,count,flag=0;
    //freopen("in.txt","r",stdin);
   //freopen("out.txt","w",stdout);
    while(scanf("%d%d",&x,&y) != EOF)
    {
        if(x > y)//比较x y大小
        {
            int temp = y;
            y = x;
            x = temp;
        }
        int i,str[500000];
        memset(str,0,sizeof(str));
        for(i = x; i <= y; i++)
        {
            if(str[i] < 0)//跳过删掉的数
                continue;
            if(sushu(i) == 1)
            {
                int flag;
                //这里初始化值为i+1是为了避免将最小的素数本身给跳过
                for(flag = i+1; flag <= y; flag++)//将后面所有的素数倍数删掉
                {
                    if(flag % i == 0)
                        str[flag] = -1;
                }
                str[i] = 1;//将该素数储存，i的值就是素数的值
            }
        }
        count = 0;
if(flag==0){
        for(i = x; i <= y; i++)
            if(str[i] == 1)
            {
                printf("%d\n",i);
                count=1;
            }
        if(count == 0)//用count来做标志，如果从x到ycount从未被改变，说明无素数
            printf("\n");

    }
else{
         printf("\n");
        for(i = x; i <= y; i++)
            if(str[i] == 1)
            {
                printf("%d\n",i);
                count=1;
            }
        if(count == 0)//用count来做标志，如果从x到ycount从未被改变，说明无素数
            printf("\n");

    }
    flag=1;
    }
    return 0;
}

/**************************************************************
	Problem: 1179
	User: 201901060203
	Language: C
	Result: Accepted
	Time:204 ms
	Memory:2636 kb
****************************************************************/

