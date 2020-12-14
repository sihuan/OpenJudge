#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,k,flag,a[10001]={0},b;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i+1]);
    }
    while(scanf("%d",&b)!=EOF){
    flag=0;
    for(i=0;i<n;i++){
        if(b==a[i+1]){
           flag=1;
            k=i+1;
        }
    }
    if(flag==1)
    printf("%d\n",k);
    if(flag==0)
            printf("NOT FOUND\n");
    }
    return 0;
}

/**************************************************************
	Problem: 1460
	User: 201901060203
	Language: C
	Result: Accepted
	Time:40 ms
	Memory:748 kb
****************************************************************/

