#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
    int a,ge,shi,bai,qian;
    scanf("%d",&a);
    if(a>0)
    {
        qian=a/1000;
        bai=a/100-10*qian;
        ge=a%10;
        shi=a/10-100*qian-10*bai;
        printf("%d%d%d%d",qian,ge,shi,bai);
    }
    else
    {
        a=abs(a);
        qian=a/1000;
        bai=a/100-10*qian;
        ge=a%10;
        shi=a/10-100*qian-10*bai;
        printf("-%d%d%d%d",qian,ge,shi,bai);
    }

    return 0;
}
/**************************************************************
	Problem: 1822
	User: 201801020908
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

