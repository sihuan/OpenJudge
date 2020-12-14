#include<stdio.h>
int main()
{
    int k,m,n,i,j=0;
    scanf("%d%d%d",&k,&m,&n);
    for (i=1;i<=k;i++){
        if (i%m == 0 || i%n == 0)
            if (i%m == 0 && i%n == 0);
            else{
                if(j == 0)
                    printf("%d",i);
                else
                    printf(" %d",i);
                j++;
            }
    }
}

/**************************************************************
	Problem: 1019
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

