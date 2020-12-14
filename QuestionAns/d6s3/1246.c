#include<stdio.h>

int main()
{
    int n,i,j,score;
    char name[9];
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%s %d",name,&score);
        printf("%8s |",name);
        for(j=1;j<=score;j++)
            printf("=");
        printf("\n");
    }
}

/**************************************************************
	Problem: 1246
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

