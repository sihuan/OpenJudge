#include<stdio.h>

int main(){
    int a,b,c;
    char ch1,ch2;
    scanf("%d",&a);
    getchar();
    ch1=getchar();
    getchar();
    ch2=getchar();
    scanf("%d%d",&b,&c);
    int i;
    for(i=1;i<=c;++i){
        printf("%d",a);
        int n;
        n=ch1-'A'+1;
        if(n<10){
            printf("0%d",n);
        }
        else{
            printf("%d",n);
        }
        n=ch2-'A'+1;
        if(n<10){
            printf("0%d",n);
        }
        else{
            printf("%d",n);
        }
        if(b<10){
            printf("0%d",b);
        }
        else{
            printf("%d",b);
        }
        if(i<10){
            printf("0%d\n",i);
        }
        else{
            printf("%d\n",i);
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1425
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

