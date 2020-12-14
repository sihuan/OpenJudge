#include<math.h>
#include<stdio.h>
#include<string.h>

int main()

{

    char a[200];
    //unsigned long long int 不对
     long long int i=0,n=0,sum=0,l=0;
    while(scanf("%s",a)!=EOF)
    {
        sum=0;
        l=strlen(a);
    for(i=l-1;i>=0;i--)
         sum+=(a[i]-'0')*((long long int)pow(2,l-1-i));
    printf("%llu\n",sum);
    }

}

/**************************************************************
	Problem: 1242
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:760 kb
****************************************************************/

