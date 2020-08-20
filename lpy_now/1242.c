#include<stdio.h>
#include<string.h>

int main(){
    //freopen("test.txt","r",stdin);
    long long pow[33]={1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,
    1048576,2097152,4194304,8388608,16777216,33554432,67108864,134217728,268435456,536870912,1073741824,2147483648,
    4294967296};
    char ch[50];
    while(gets(ch)!=NULL){
        int len=strlen(ch);
        int i;
        long long sum=0;
        for(i=len-1;i>=0;--i){
            if((int)(ch[i]-'0')==1){
                sum+=pow[len-i-1];
            }
        }
        printf("%lld\n",sum);
    }
    return 0;
}

/**************************************************************
	Problem: 1242
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

