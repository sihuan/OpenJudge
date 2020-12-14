#include<stdio.h>

int main(){
    //freopen("test.txt","r",stdin);
    int n,flag=1;
    int max,ans=0;
    while(scanf("%d",&n)!=EOF){
        if(flag==1){
            max=n,++ans,flag=0;
        }
        else{
            if(n==max){
                ++ans;
            }
            if(n>max){
                ans=1,max=n;
            }
        }
    }
    printf("maximum data is %d, whose occurences is %d.",max,ans);
    return 0;
}

/**************************************************************
	Problem: 1424
	User: 201901061011
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

