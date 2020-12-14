#include<stdio.h>

int main(){
    int num[20];
    int i;
    for(i=0;i<15;++i){
        scanf("%d",&num[i]);
    }
    int p,q;
    scanf("%d%d",&p,&q);
    if(p>q){
        int temp=p;
        p=q,q=temp;
    }
    int tot=0;
    for(i=0;i<15;++i){
        if(num[i]>=p && num[i]<=q){
            ++tot;
        }
    }
    printf("%d",tot);
    return 0;
}

/**************************************************************
	Problem: 2292
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

