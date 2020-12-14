#include <stdio.h>

int main()
{
    double p, w, m, yf=0;
    scanf("%lf %lf %lf", &p, &w, &m);
    if(m > 2000.0){
        yf += (m-2000)*p*w*0.88;
        m = 2000.0;
    }
    if(m > 1000.0){
        yf += (m-1000)*p*w*0.9;
        m= 1000.0;
    }
    if(m > 500.0){
        yf += (m-500)*p*w*0.95;
        m = 500.0;
    }
    yf += m*p*w;
    printf("%.2lf", yf);
}

/**************************************************************
	Problem: 2412
	User: 201901060610
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

