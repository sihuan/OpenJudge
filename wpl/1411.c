#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main()
{
    int sum,i,x,a,d;
    char str[1010];
    while(scanf("%s",str)!=EOF){
        i=strlen(str);
        sum=0;
        for(;i>0;i--){
            sum+=str[i-1]-'0';
        }
        if(sum<10) printf("%d\n",sum);
        else {
            while(sum>=10){
                    x=0;
                while(sum){
                    d=sum%10;
                    sum=(sum-d)/10;
            x+=d;
                }
                sum=x;
            }
        printf("%d\n",x);}
    }
    return 0;
}
/**************************************************************
	Problem: 1411
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

