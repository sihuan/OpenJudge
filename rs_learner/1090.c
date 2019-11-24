#include<stdio.h>
int main()
{
    int a,b,c,i;
    scanf("start = %d, step = %d, times = %d",&a,&b,&c);
    i=a+b;
    printf("%d",a);
    if(b>0)
    {
        while(i<=a+(c-1)*b)
          {
              printf(" %d",i);
              i=i+b;
          }
    }
    else
    {
        while(i>=a+(c-1)*b)
          {
              printf(" %d",i);
              i=i+b;
          }
    }



    return 0;
}
/**************************************************************
	Problem: 1090
	User: 201801020908
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

