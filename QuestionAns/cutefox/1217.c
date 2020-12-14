#include<stdio.h>
int myFloor(double data)
{
    int m;
      double c;
     m=(int)(data);
     c=data-m;
     if(c>0)
     return m;
     if(c==0)
      return m;
      if(c<0)
      return m-1;
}
int myCeil(double data)
{
       int m;
       double c;
     m=(int)(data);
     c=data-m;
     if(c>0)
     return m+1;
     if(c==0)
      return m;
      if(c<0)
      return m;
}
 
int main()
{
    double data;
    while(scanf("%lf", &data) != EOF)
        printf("%d %d\n", myFloor(data), myCeil(data));
    return 0;
}
/**************************************************************
	Problem: 1217
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

