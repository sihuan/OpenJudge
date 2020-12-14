#include<stdio.h>

int printjz(int n)
{
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j==1){
                if(j==i)
                    printf("1");
                else
                    printf("0");
            }
            else{
                if(j==i)
                    printf(" 1");
                else
                    printf(" 0");
            }
        }
        printf("\n");
    }
}

int main()
{
    int n,i=0;
    while(scanf("%d",&n)!=EOF)
        if(i==0){
            printjz(n);
            i++;
        }
        else{
            printf("\n");
            printjz(n);
        }
}

/**************************************************************
	Problem: 1506
	User: 201901060610
	Language: C
	Result: Accepted
	Time:88 ms
	Memory:748 kb
****************************************************************/

