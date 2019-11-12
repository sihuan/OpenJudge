#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int n,sum;
    while(scanf("%d",&n)!=EOF){
        if(n>=10){
                while(n>=10){
                        sum=0;
            while(n){
               sum=sum+n%10;
               n=n/10;
            }n=sum;
        }}
        else sum=n;
        printf("%d\n",sum);
    }
    return 0;
}
/**************************************************************
	Problem: 1410
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

