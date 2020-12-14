#include <stdio.h>
int main()
{
    int i,j,n,flag=1;
    int m;
    scanf("%d",&m);
    for(j=1;j<=m;++j){
        scanf("%d",&n);
        int sum=0;
        if(flag==1){
            flag=0;
        }
        else{
            printf("\n");
        }
        for(i=0;i<n;++i){
            int num;
            scanf("%d",&num);
            sum+=num;
        }
        printf("%d",sum);
    }
    return 0;
}

/**************************************************************
	Problem: 1043
	User: 201901061011
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

