#include<stdio.h>

int main()
{
    int n,i,j,h,k;
    while (scanf("%d",&n) && n!=0){
        if (n%2==0){
            for (i=1,j=(n-1);i<=n;i++,j--){
                h=1,k=1;
                while(h<=j){
                    printf(" ");
                    h++;
                }
                while(k<(2*i-1)){
                    printf("+");
                    k++;
                }
                printf("+\n");
            }
        }
        else{
            for(i=1,j=n;i<=n;i++,j--){
                h=1,k=1;
                while(h<i){
                    printf(" ");
                    h++;
                }
                while(k<(2*j-1)){
                    printf("+");
                    k++;
                }
                printf("+\n");
            }
        }
    printf("\n");
    }
}

/**************************************************************
	Problem: 1096
	User: 201901060610
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

