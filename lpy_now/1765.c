#include<stdio.h>
#include<string.h>

int main(){
    int n;
    scanf("%d",&n);
    int i;
    char num[100];
    for(i=0;i<n;++i){
        scanf("%s",num);
        int l=strlen(num);
        int j;
        for(j=0;j<l;++j){
            if((l-j)%3==0 && j!=l-1 && j!=0){
                putchar(',');
            }
            putchar(num[j]);
        }
        printf("\n");
    }
    return 0;
}
/**************************************************************
	Problem: 1765
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

