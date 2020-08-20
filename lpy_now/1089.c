#include<stdio.h>

int read(){
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
        if(ch=='/'){
            break;
        }
    }
    return num*f;
}

int main(){
    int a=read(),b;
    b=read();
    double d=(double)a/(double)b;
    d*=100;
    int ans;
    if(d>=0){
        ans=(int)(d+0.5);
    }
    else{
        ans=(int)(d-0.5);
    }
    d=(double)ans/100.0;
    printf("%.2f",d);
    return 0;
}

/**************************************************************
	Problem: 1089
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

