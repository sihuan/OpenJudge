#include<stdio.h>
#include<time.h>
#include <stdlib.h>
int main()
{
    double x,y;
    scanf("(%lf, %lf)",&x,&y);
    if(x>0&&y>0)
        printf("(%.1f, %.1f) is in quadrand I",x,y);
    else if(x<0&&y>0)
        printf("(%.1f, %.1f) is in quadrand II",x,y);
    else if(x<0&&y<0)
        printf("(%.1f, %.1f) is in quadrand III",x,y);
    else if(x>0&&y<0)
        printf("(%.1f, %.1f) is in quadrand IV",x,y);
    else if(x==0&&y==0)
        printf("(%.1f, %.1f) is origin",x,y);
    else if(x==0&&(y>0||y<0))
        printf("(%.1f, %.1f) is on the y axis",x,y);
    else if(y==0&&(x<0||x>0))
        printf("(%.1f, %.1f) is on the x axis",x,y);

}

/**************************************************************
	Problem: 1162
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

