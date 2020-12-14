#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch1,ch2;
    int x,y;
    scanf("%c",&ch1);
    getchar();
    scanf("%c",&ch2);
    /*ch1<=90?ch1=ch1+32:ch1=ch1;
    ch2<=90?ch2=ch2+32:ch2=ch2;*/
        if  (ch1<=90)
            ch1=ch1+32;
        else
            ch1=ch1;
        if  (ch2<=90)
            ch2=ch2+32;
        else
            ch2=ch2;


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
	Problem: 1910
	User: 201801020908
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

