#include <stdlib.h>
#include<stdio.h>
int main()
{
    char a,b;
    int c,d;
    double e,num,num2;
    scanf("%c->%c",&a,&b);
    scanf("%d",&c);
    scanf("%d",&d);
    scanf("%lf",&e);
    if(a=='C'&&b=='F'){
    printf("   C  ->    F\n");
  for(num=c;num<=d+0.01;num=num+e){
    num2=32+num*9.0/5;
     printf("%5.1lf -> %5.1lf\n",num,num2);
  }
    }
else
    {
    printf("   F  ->    C\n");
  for(num=c;num<=d+0.01;num=num+e){
    num2=(num-32)*5/9.0;
     printf("%5.1lf -> %5.1lf\n",num,num2);
  }
    }
    return 0;
}

/**************************************************************
	Problem: 1028
	User: 201901060203
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

