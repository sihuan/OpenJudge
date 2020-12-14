#include<stdio.h>

int main(){
    //freopen("test data.txt","r",stdin);
    int tot=0;
    int n;
    while(scanf("%d",&n)!=EOF){
        tot+=n;
    }
    if(tot>=4899){
        printf("%d.00",(int)(tot*0.8));
    }
    else if(tot>=2499){
        printf("%d.00",(int)(tot*0.85));
    }
    else if(tot>=899){
        printf("%d.00",(int)(tot*0.9));
    }
    else if(tot>=399){
        printf("%d.00",(int)(tot*0.95));
    }
    else{
        printf("%d.00",(int)(tot));
    }
    return 0;
}

/**************************************************************
	Problem: 1762
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

