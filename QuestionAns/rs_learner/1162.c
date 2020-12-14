#include<stdio.h>
int main()
{
    double a,b;
    scanf("(%lf, %lf)",&a,&b);
    if(a>0&&b>0)
        printf("(%.1lf, %.1lf) is in quadrand I",a,b);
    if(a<0&&b>0)
        printf("(%.1lf, %.1lf) is in quadrand II",a,b);
    if(a<0&&b<0)
        printf("(%.1lf, %.1lf) is in quadrand III",a,b);
    if(a>0&&b<0)
        printf("(%.1lf, %.1lf) is in quadrand IV",a,b);
    if(a==0&&b!=0)
        printf("(%.1lf, %.1lf) is on the y axis",a,b);
    if(b==0&&a!=0)
        printf("(%.1lf, %.1lf) is on the x axis",a,b);
    if(a==0&&b==0)
        printf("(%.1lf, %.1lf) is origin",a,b);


    return 0;
}
/**************************************************************
	Problem: 1162
	User: 201801020908
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

