#include<stdio.h>

int myFloor(double n){
    if((n-(int)n)!=0){
            if(n>0){
                return (int)n;
            }
            else if(n<0){
                return (int)(n-1);
            }
        }
        else{
            return (int)n;
        }
}
int myCeil(double n){
    if((n-(int)n)!=0){
            if(n>0){
                return (int)(n+1);
            }
            else if(n<0){
                return (int)n;
            }
        }
        else{
            return (int)n;
        }
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
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

