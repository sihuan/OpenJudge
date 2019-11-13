#include <stdio.h>
#include <stdlib.h>
int main()
{
    #ifdef LOCAL
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    char strings[100];
    gets(strings);
    int COCK,HEN,CHICK1,CHICK2,MONEY,CHICKS;
    int i,j,k,M,C;
	int flag;
	int x,y;
    while(scanf("%d,%d,%d/%d,%d,%d\n",&COCK,&HEN,&CHICK1,&CHICK2,&MONEY,&CHICKS) != EOF)
    {
        flag = 0;
        for(i=0; i<=CHICKS; ++i)
        {
            j = CHICK2*(MONEY-HEN*CHICKS-COCK*i+HEN*i)/(CHICK1-HEN*CHICK2);
            y = CHICKS-i-j;
			if(i<0 || j<0 || y<0 || COCK*CHICK2*i+HEN*CHICK2*y+CHICK1*j != CHICK2*MONEY) continue;
            if(flag == 0)
            {
                printf("COCKS,HENS,CHICKS\n");
                flag = 1;
            }
            printf("%d,%d,%d\n",i,y,j);
        }
        if(flag == 0) printf("Cannot buy!\n");
        putchar('\n');
    }

    return 0;
}

/**************************************************************
	Problem: 1046
	User: 201601011420
	Language: C
	Result: Accepted
	Time:140 ms
	Memory:748 kb
****************************************************************/

