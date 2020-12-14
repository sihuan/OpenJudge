#include<stdio.h>
int main()
{
    int a,b,t;
    scanf("%d:%d",&a,&b);
    if(a>12)
    {
        t=a-12;
        printf("%02d:%02d p.m.",t,b);
    }else if(a==0)
    {
        a=12;
        printf("%02d:%02d a.m.",a,b);
    }else if(a==12){

    printf("%02d:%02d p.m.",a,b);

    }
      else
      printf("%02d:%02d a.m.",a,b);

    return 0;
}


/**************************************************************
	Problem: 1163
	User: 201901061304
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

