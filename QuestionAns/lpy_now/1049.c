#include<stdio.h>
#include<string.h>

int mem[1001000];

void swap(int *n,int *m){
	if(*n>*m){
		int temp=*n;
		*n=*m,*m=temp;
	}
}

int main(){
	int n,m;
	int max;
	while(scanf("%d%d",&n,&m)!=EOF){
		printf("%d %d ",n,m);
		swap(&n,&m);
		int i;
		for(i=n;i<=m;++i){
			int k=1,flag=i;
			if(mem[i]==0){
                while(flag!=1){
                    if(flag%2==0){
                        flag/=2;
                    }
                    else{
                        flag=flag*3+1;
                    }
                    k++;
                }
                mem[i]=k;
			}
			else if(mem[i]!=0){
                k=mem[i];
			}
			if(i==n){
				max=k;
			}
			if(max<k){
				max=k;
			}
		}
		printf("%d\n",max);
	}
	return 0;
}

/**************************************************************
	Problem: 1049
	User: 201901061011
	Language: C
	Result: Accepted
	Time:224 ms
	Memory:4656 kb
****************************************************************/

