#include<stdio.h>

/*int read(){
    int num=0,f=1;
    char ch=getchar();
    while(ch<'0' || ch>'9'){
        if(ch=='-'){
            f=-1;
        }
        ch=getchar();
    }
    while(ch>='0' && ch<='9'){
        num=num*10+ch-'0',ch=getchar();
    }
    return num*f;
}*/

int main(){
    //freopen("test data.txt","r",stdin);
    int tot;
    scanf("%d",&tot);
    int n;
    tot=0;
    while(scanf("%d",&n)!=EOF){
        tot+=n;
    }
    if(tot>=0){
        printf("No");
    }
    else{
        printf("Yes");
    }
    return 0;
}

/**************************************************************
	Problem: 2044
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

