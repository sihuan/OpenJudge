#include<math.h>
#include<stdio.h>
#include<stdlib.h>

double func(double x){
    double y;
    if(x<0){
        return -x;
    }
    else if(x>=0 && x<1){
        return sin(x*2);
    }
    else if(x>=1 && x<5){
        return sqrt(x*x*x+x);
    }
    else{
        return 2.0*x+10;
    }
}
int output(int n, double x){
    printf("case %d:y=%g.\n",n,x);
    return 0;
}

int main()
{
    int i, cases;
    double x;
    scanf("%d", &cases);
    for(i = 1; i <= cases; i++)
    {
        scanf("%lf", &x);
        output(i, func(x));
    }
    return 0;
}
/**************************************************************
	Problem: 1146
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:756 kb
****************************************************************/

