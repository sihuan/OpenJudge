#include<stdio.h>
#include<string.h>

int main(){
    //freopen("test.txt","r",stdin);
    int n,i,sum;
    char ch[1100];
    while(gets(ch)!=NULL){
        n=0;
        int l=strlen(ch);
        for(i=0;i<l;++i){
            n+=(int)(ch[i]-'0');
        }
        int sum=0;
        while(1){
            while(n>0){
                int a=n%10;
                sum+=a;
                n/=10;
            }
            if(sum<10){
                break;
            }
            n=sum;
            sum=0;
        }
        printf("%d\n",sum);
    }
    return 0;
}

/**************************************************************
	Problem: 1411
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

