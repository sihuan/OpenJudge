#include<stdio.h>

int num[11000];

int main(){
    int n;
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;++i){
        scanf("%d",&num[i]);
    }
    int l,r;
    while(scanf("%d%d",&l,&r)!=EOF){
        if(l>r){
            int temp=l;
            l=r,r=temp;
        }
        if(r<1 || l>n){
            printf("OUT OF RANGE\n");
            continue;
        }
        if(l<1){
            l=1;
        }
        if(r>n){
            r=n;
        }
        for(i=l;i<=r;++i){
            printf("%d",num[i]);
            if(i!=r){
                printf(" ");
            }
            else{
                printf("\n");
            }
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1468
	User: 201901061011
	Language: C
	Result: Accepted
	Time:36 ms
	Memory:788 kb
****************************************************************/

