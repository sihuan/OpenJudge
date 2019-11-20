#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
int f;
    long long int k,jc=1,sum=0,i,j;
    scanf("%lld",&k);
    for(i=1;i<=k;i++)
    {
        jc=1;
        for(j=1;j<=i;j++)
        {
            jc=jc*j;
        }
        sum=sum+jc;
        if(sum>2455009817)
        {f=1;
        break;}
    }
 if(f==1)
 printf("overflow");
 else  
        printf("%lld",sum);   
    return 0;
}
/**************************************************************
	Problem: 1029
	User: 201901060819
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:800 kb
****************************************************************/

