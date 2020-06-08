#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,tmp,i,sum=0;
    scanf("%d%d",&m,&n);
    if(m>n)
    {
      tmp=m;
      m=n;
      n=tmp;
    }
    for(i=m;i<=n;i++)
    {
        if(i%12==0)
            sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}

/**************************************************************
	Problem: 1269
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

