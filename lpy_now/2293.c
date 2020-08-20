#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int p,q;
    while(scanf("%d%d",&p,&q)!=EOF){
        int i;
        int flag=1;
        for(i=q;i>=p;--i){
            int x=i,y;
            y=(c-a*x)/b;
            if(a*x+b*y-c==0 && (y>=p && y<=q)){
                if(x!=0 || y!=0){
                    printf("%d %d\n",x,y);
                    flag=0;
                    break;
                }
            }
        }
        if(flag){
            printf("no\n");
        }
    }
    return 0;
}

/**************************************************************
	Problem: 2293
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

