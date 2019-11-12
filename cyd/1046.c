#include<stdio.h>

int main()
{
    int a, b, c, d, m, n, x, y, z, f=0;
    scanf("COCK,HEN,CHICK,MONEY,CHICKS");
    while(scanf("%d,%d,%d/%d,%d,%d",&a,&b,&c,&d,&m,&n) != EOF)
    {
         f=0;

          for(x=0;x<=m/a;x++)
            {

                y=(m*d-c*n+x*(c-a*d))/(b*d-c);
               z=n-x-y;
                if(x>=0&&y>=0&&z>=0&&a*d*x+b*d*y+c*z==d*m)
                {
                    if(f==0)
                        printf("COCKS,HENS,CHICKS\n");
                    f=1;
                    printf("%d,%d,%d\n", x, y, z);
                }
            }
            if(f==0)
                printf("Cannot buy!\n");
               printf("\n");

    }
    return 0;
}

/**************************************************************
	Problem: 1046
	User: 201901061304
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:748 kb
****************************************************************/

