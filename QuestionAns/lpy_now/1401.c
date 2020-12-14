#include<stdio.h>

int main(){
    double d;;
    scanf("%lf",&d);
    double r=d/2.0;
    double s,v;
    s=3.14159265358979323846*r*r*4;
    v=4*3.14159265358979323846*r*r*r/3;
    printf("area = %lf\n",s);
    printf("volume = %lf",v);
}

/**************************************************************
	Problem: 1401
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

