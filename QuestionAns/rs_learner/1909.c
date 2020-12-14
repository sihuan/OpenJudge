#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch1,ch2;
    int x,y;
    scanf("%c",&ch1);
    getchar();
    scanf("%c",&ch2);
        x=abs(ch2-ch1)-1;
        y=24-abs(x);
    if(ch2>ch1)
        printf("%d %d",abs(x),y);
    else if(ch1==ch2)
        printf("0 0");
    else
        printf("%d %d",y,abs(x));
    return 0;
}
/**************************************************************
	Problem: 1909
	User: 201801020908
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

