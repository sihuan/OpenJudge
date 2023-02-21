#include <stdio.h>
#include <string.h>

int get_digit(int n,int count){

if(n>=0&&n<10)
    return count+1;
count++;
return get_digit(n/10,count);

}

int pow(int n,int count){
int res =1;
if(count == 0)return 1;
for(int i = 1;i<=count;i++){
    res *= n;
}
return res;
}

int is_p(int n){
int digit = get_digit(n,0);
//printf("%d",digit);
int len;

if(digit%2==0)
    len = digit/2;
else
    len = (digit+1)/2-1;

    int a[100];
for(int i = 0;i<digit;++i){

    a[i]=(n/(pow(10,i)))%10;
}
for(int i = 0;i<len;++i){
    if(a[i]!=a[(digit-1)-i])
    return 0;
}
return 1;
}

int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        printf("%s\n",is_p(n)?"Yes.":"No.");
    }

return 0;
}

/**************************************************************
	Problem: 2675
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

