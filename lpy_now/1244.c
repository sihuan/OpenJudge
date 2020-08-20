#include<stdio.h>
#include<string.h>

int main(){
    int n;
    while(1){
        scanf("%d",&n);
        if(n==0){
            return 0;
        }
        else{
            int a=0,b=0,c=0;
            int i;
            for(i=n;i>1;--i){
                ++a;
                if(a==60){
                    a=0,++b;
                }
                if(b==60){
                    b=0,++c;
                }
            }
            printf("%0.2d:%0.2d:%0.2d\n",c,b,a);
        }
    }
    return 0;
}
/**************************************************************
	Problem: 1244
	User: 201901061011
	Language: C
	Result: Accepted
	Time:72 ms
	Memory:748 kb
****************************************************************/

