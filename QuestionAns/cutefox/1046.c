
#include <stdio.h>

int main()
{
    scanf("COCK,HEN,CHICK,MONEY,CHICKS");
    int a,b,c,d,m,n,x,y,z,flag;
    while (scanf("%d,%d,%d/%d,%d,%d",&a,&b,&c,&d,&m,&n)!=EOF)
    {
        flag=0;
 /*这一个要在for循环的外面，因为要保证方程有解后flag值不为0*/
        for(x=0;x<=m/a;x++)
        {
                z=(m-a*x-b*n+b*x)*d/(c-b*d);
                y=n-x-z;
                if((x*a*d + y*b*d + z*c == m*d)&&(z>=0&&y>=0))
                {
                    if(flag==0)
                    {
                     puts ("COCKS,HENS,CHICKS");
                    }
                    /*目的：使这个puts语句只执行一次*/
                    printf("%d,%d,%d\n",x,y,z);
                    flag=1;
                 }
        }
        /*要是for循环完全结束后flag的值仍未被改变，则方程无解，
        之所以要单独列出来，是因为cannot前面没有cocks...那堆东西*/
       if(flag==0)
        {
            printf("Cannot buy!\n");
            printf("\n");
        }
        else
            /*输出一行空行*/
        printf("\n");
    }
    return 0;
}

/**************************************************************
	Problem: 1046
	User: 201901060203
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:748 kb
****************************************************************/

