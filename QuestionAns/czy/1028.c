#include <stdio.h>

int main()
{
    char C,jian,tou,F;
    double a=0,b=0,c=0,d=0,i;
    scanf("%c %c %c %c",&C,&jian,&tou,&F);
    scanf("%lf%lf%lf",&a,&b,&c);
    if(C=='C' && F=='F')
    {
        printf("   C  ->    F\n");
        for(i=a;i<=b+0.01;i=i+c)
        {
            printf("%5.1lf -> %5.1lf\n",i,i*9/5+32);
        }
    }
    else
    {
        printf("   F  ->    C\n");
        for(i=a;i<=b+0.01;i=i+c)
        {
            printf("%5.1lf -> %5.1lf\n",i,(i-32)*5/9);
        }

    }
return 0;
}

/**************************************************************
	Problem: 1028
	User: 201601160202
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

