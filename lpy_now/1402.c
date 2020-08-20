#include<stdio.h>

int main(){
    int a[3],i,ans=0;
    for(i=0;i<3;++i){
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            ans+=a[i];
        }
        else{
            ans+=a[i]+1;
        }
    }
    printf("%d",ans);
    return 0;
}

/**************************************************************
	Problem: 1402
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

