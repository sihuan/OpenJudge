#include<stdio.h>
int main()
{
    int a,b;
	scanf("%d %d",&a,&b);
    printf("Octal Decimal Hexadecimal\n");
    
    if(a>=0)printf("%-5o %-7d %x\n",a,a,a);
    if(b<=1000)printf("%-5o %-7d %x\n",b,b,b);
    return 0;


}
/**************************************************************
	Problem: 1158
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

