#include<stdio.h>
int main()
{
    int a,b,c,i,j,h=0;
    scanf("%d %d",&a,&b);
    printf("=====\n");
    for (i=b;i>=a && i>1;i--){
        for (j=2,h=0;j<i;j++){
            if (i%j == 0){
                h=1;
                break;
            }
        }
        if (h != 1)
            printf("%d\n",i);
    }
    printf("=====\n");
}

/**************************************************************
	Problem: 1027
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

