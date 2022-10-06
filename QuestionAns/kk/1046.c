#include <stdio.h>

int main()
{
    scanf("COCK,HEN,CHICK,MONEY,CHICKS");
    int a,b,c,d,m,n,x,y,z;
    while (scanf("%d,%d,%d/%d,%d,%d",&a,&b,&c,&d,&m,&n)!=EOF)
    {
        int i=0;
        for(x=0;x<=m/a;x++)
        {
                z=(m-a*x-b*n+b*x)*d/(c-b*d);
                y=n-x-z;
                if((x*a*d + y*b*d + z*c == m*d)&&(z>=0&&y>=0))
                {
                    i++;
                    if(i==1)
                    {
                     puts ("COCKS,HENS,CHICKS");
                    }
                    printf("%d,%d,%d\n",x,y,z);
                 }
        }
       if(i==0)
        {
            printf("Cannot buy!\n");
            printf("\n");
        }
        else
        printf("\n");
    }
    return 0;
}
/**************************************************************
	Problem: 1046
	User: 202001060117
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:748 kb
****************************************************************/

