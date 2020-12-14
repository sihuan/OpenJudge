#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,a[10001]={0},b;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i+1]);
    }
    while(scanf("%d",&b)!=EOF){
     if(b>=1&&b<=n)
     printf("%d\n",a[b]);
      else
        printf("OUT OF RANGE\n");
    }
    return 0;
}

/**************************************************************
	Problem: 1458
	User: 201901060203
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

