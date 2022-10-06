#include<stdio.h>
int main()
{
    int t;
    int s,m,h;
    while(1)
    {
        scanf("%d",&t);
        if(t==0)
            break;
        t=t-1;
        s=t%60;
        m=t/60%60;
        h=t/3600;
        printf("%02d:%02d:%02d\n",h,m,s);
    }

}

/**************************************************************
	Problem: 1244
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

