#include <stdio.h>


int myFloor(double data){

 if(data==(int)data)return (int)data;
  else
    return data>0?(int)data:(int)(data-1);


}


int myCeil(double data){
  if(data==(int)data)return (int)data;
  else
    return myFloor(data+1);


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
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

