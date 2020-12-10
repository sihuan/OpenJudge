#include <stdio.h>
#include <stdlib.h>


int main()
{
    char s[30];
    int a,b,c,d,e,m,n,i=0;
    double f;
    int cocks=0,hens=0,chicks=0;
    scanf("%s",s);
    while(scanf("%d,%d,%d/%d,%d,%d",&a,&b,&c,&d,&m,&n)!=EOF)
    {
        e=m;
        while(cocks<=e/a)
        {
            m=e-(a*cocks);
            f=(m*d-(n-cocks)*c)*1.0/(b*d-c);
            hens=(m*d-(n-cocks)*c)/(b*d-c);
            chicks=n-cocks-hens;
            if(f==hens&&hens>=0&&chicks>=0)
            {
                if(i==0)
                    printf("COCKS,HENS,CHICKS\n");
                printf("%d,%d,%d\n",cocks,hens,chicks);
                i++;
            }
            cocks++;
        }
        if(i==0)
            printf("Cannot buy!\n");
        cocks=0;
        hens=0;
        chicks=0;
        i=0;
        printf("\n");
    }
    return 0;
}
/**************************************************************
	Problem: 1046
	User: 202001060915
	Language: C
	Result: Accepted
	Time:16 ms
	Memory:748 kb
****************************************************************/

