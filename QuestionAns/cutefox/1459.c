#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,flag,a[10001]={0},b;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i+1]);
    }
    while(scanf("%d",&b)!=EOF){
    for(i=0;i<n;i++){
            flag=0;
        if(b==a[i+1]){
            printf("%d\n",i+1);
            flag=1;
            break;
        }
    }
    if(flag==0)
            printf("NOT FOUND\n");
    }
    return 0;
}

/**************************************************************
	Problem: 1459
	User: 201901060203
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:748 kb
****************************************************************/

