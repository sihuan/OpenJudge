#include<stdio.h>

int main(){
    int a1,b1,c1,tot1;
    int a2,b2,c2,tot2;
    scanf("%d%d%d%d",&a1,&b1,&c1,&tot1);
    scanf("%d%d%d",&a2,&b2,&c2);
    tot2=a2+b2+c2;
    if(a2>=a1 && b2>=b1 && c2>=c1 && tot2>=tot1){
        printf("congratulations");
    }
    else{
        printf("sorry");
    }
    return 0;
}

/**************************************************************
	Problem: 1404
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

