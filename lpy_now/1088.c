#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int a,b,c;
    scanf("%d",&a);
    if(a<100 && a>-100){
        c=abs(a%10);
        a/=10;
        b=abs(a%10);
        if(b==0){
            printf("%d",c);
            return 0;
        }
        else{
            printf("%d%d",b,c);
            return 0;
        }
    }
    c=abs(a%10);
    a/=10;
    b=abs(a%10);
    printf("%d%d",b,c);
    return 0;
}

/**************************************************************
	Problem: 1088
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

