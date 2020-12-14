#include <stdio.h>
int main()
{
    int i,flag=1,n;
    while(1){
        scanf("%d",&n);
        if(n==0){
            break;
        }
        if(flag==1){
            flag=0;
        }
        else{
            printf("\n");
        }
        int sum=0,m;
        for(i=1;i<=n;++i){
            scanf("%d",&m);
            sum+=m;
        }
        printf("%d",sum);
    }
    return 0;
}

/**************************************************************
	Problem: 1044
	User: 201901061011
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

