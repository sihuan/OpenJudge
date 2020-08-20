#include<stdio.h>

int main(){
    //freopen("test data.txt","r",stdin);
    char ch;
    int tot=0,num=0;
    int flag=1;
    while(scanf("%d",&num)!=EOF){
        if(flag==1){
            tot+=num;
        }
        else if(flag==0){
            tot-=num;
        }
        ch=getchar();
        if(ch=='+'){
            flag=1;
        }
        else if(ch=='-'){
            flag=0;
        }
        else if(ch=='='){
            printf("%d\n",tot);
            tot=0;
            flag=1;
        }
    }
    return 0;
}

/**************************************************************
	Problem: 2037
	User: 201901061011
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

