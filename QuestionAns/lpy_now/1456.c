#include<stdio.h>
#include<math.h>

int main(){
    //freopen("test data.txt","r",stdin);
    int n;
    scanf("%d",&n);
    int i,j;
    int flag=1;
    for(i=3;i<=n;i+=2){
        flag=1;
        for(j=2;j<i;++j){
            if(i%j==0){
                flag=0;
            }
        }
        int b=n-i;
        if(b%2==0 || i>b){
            flag=0;
        }
        for(j=2;j<b;++j){
            if(b%j==0){
                flag=0;
            }
        }
        if(flag==1){
            printf("%d + %d = %d\n",i,b,n);
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1456
	User: 201901061011
	Language: C
	Result: Accepted
	Time:72 ms
	Memory:748 kb
****************************************************************/

