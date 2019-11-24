#include<stdio.h>
int main()
{
    int a,b,zhengge=0,fuge=0;
    double zhengsum=0,fusum=0;
    while(1)
    {
        scanf("%d",&a);
        if(a==0)
            break;
        else
        {
            if(a>0)
            {
                zhengsum=zhengsum+a;
                zhengge=zhengge+1;
            }
            if(a<0)
            {
                fusum=fusum+a;
                fuge=fuge+1;
            }


        }
    }
    if(fuge==0)
        printf("0\n");
    else
        printf("%d %.2lf\n",fuge,(double)fusum/fuge);
    if(zhengge==0)
        printf("0\n");
    else
        printf("%d %.2lf\n",zhengge,(double)zhengsum/zhengge);
    return 0;
}
/**************************************************************
	Problem: 1120
	User: 201801020908
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

