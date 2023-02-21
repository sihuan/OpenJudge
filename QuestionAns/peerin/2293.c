#include<stdio.h>

int func(int res[],int a,int b, int c,int p, int q){
int flag = 0;
int x,y;
for(x = q;x>=p;--x){
    double y_ = (c - a*x)/(b*1.0);
    if((int)y_==y_&&y_>=p&&y_<=q){
        y = (int)y_;
        if(x==0&&y==0)
            continue;
        else{
                flag = 1;
            break;
        }
    }
}
if(flag == 1){
res[0]=x;
res[1]=y;
}
else{
    res[0]=res[1]=0;
}
return 0;
}

int main(){

int a,b,c;
scanf("%d%d%d",&a,&b,&c);
int p,q;
while(scanf("%d%d",&p,&q)!=EOF){
    if(p>q){
        int temp = p;
        p = q;
        q = temp;
    }
    int res[2]={0};
    func(res,a,b,c,p,q);
    int x = res[0];
    int y = res[1];
    if(x==0&&y==0)printf("no\n");
    else printf("%d %d\n",x,y);
}

return 0;
}

/**************************************************************
	Problem: 2293
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

