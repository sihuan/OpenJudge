#include<stdio.h>

int main()
{
    int ar[101][101];
    int t,m,n,h=0,i,j;
    scanf("%d",&t);
    while(h++<t){
        if(h!=1)
            printf("\n");
        scanf("%d %d",&m,&n);
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
                scanf("%d",&ar[j][i]);
        for(i=0;i<n;i++){
            for(j=0;j<m;j++)
                if(j==0)
                    printf("%d",ar[i][j]);
                else
                    printf(" %d",ar[i][j]);
            printf("\n");
        }
    }
}
/**************************************************************
	Problem: 1053
	User: 201901060610
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:748 kb
****************************************************************/

