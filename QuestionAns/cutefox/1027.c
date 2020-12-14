#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,m,k,i;
    scanf("%d%d",&a,&b);
        printf("=====\n");
if(a==1||a==0){
    for(b=b;b>=2; b--)
    {
    k=(int)sqrt((double)b);
    for(i=2;i<=k;i++)
        if(b%i==0)
        break;
    if(i>k)
        printf("%d\n",b);
    }
        printf("=====");
}
else {
    for(b=b;b>=a; b--)
    {
    k=(int)sqrt((double)b);
    for(i=2;i<=k;i++)
        if(b%i==0)
        break;
    if(i>k)
        printf("%d\n",b);
    }
        printf("=====");
}
    return 0;
}

/**************************************************************
	Problem: 1027
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:756 kb
****************************************************************/

