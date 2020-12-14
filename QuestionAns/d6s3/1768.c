#include <stdio.h>
int main()
{
    double p, s, w,yf;
    int yfi;
    scanf("%lf %lf %lf", &p, &s, &w);
    if (s < 250)
        yf = s * w * p;
    else if (s >= 250 && s < 500)
        yf = 0.98 * s * w * p;
    else if (s >= 500 && s < 1000)
        yf = 0.95 * s * w * p;
    else if (s >= 1000 && s < 2000)
        yf = 0.92 * s * w * p;
    else if (s >= 2000 && s < 3000)
        yf = 0.90 * s * w * p;
    else if (s >= 3000)
        yf = 0.85 * s * w * p;
    yfi=(int)(yf+5)/10*10;
    printf("%d",yfi);
}
/**************************************************************
	Problem: 1768
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

