#include<stdio.h>

int main(){
	//freopen("test.txt","r",stdin);
    int N,i,j,sum,m,num;
    scanf("%d",&N);
    for(i=0;i<N;++i){
    	scanf("%d",&m);
    	sum=0;
    	for(j=0;j<m;++j){
    		scanf("%d",&num);
    		if(num%2==0){
    			sum+=num;
			}
			else{
				sum+=num+1;
			}
		}
		printf("Case %d: %d\n",i+1,sum);
	}
    return 0;
}
/**************************************************************
	Problem: 1420
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

