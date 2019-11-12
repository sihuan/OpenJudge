#include <stdio.h>
   int myFloor(double data)
   {
       if(data>=0)
        data=data/1;
        else  data=(data-0.99999)/1;
     return data;
   }
    int myCeil(double data)
       {
           if(data>=0)
         data=(data+0.9999999)/1;
         else  data=(data)/1;
         return data;

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
	User: 201901061304
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

