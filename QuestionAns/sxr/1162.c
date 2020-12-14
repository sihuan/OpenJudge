#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x,y;
    scanf("(%lf, %lf)",&x,&y);
    if(x==0.0&&y==0.0)
        printf("(0.0, 0.0) is origin\n");
    else if(x==0.0&&y!=0.0)
        printf("(%.1f, %.1f) is on the y axis\n",x,y);
    else if(y==0.0&&x!=0.0)
        printf("(%.1f, %.1f) is on the x axis\n",x,y);
    else if(x>0&&y>0)
        printf("(%.1f, %.1f) is in quadrand I\n",x,y);
    else if(x<0&&y>0)
        printf("(%.1f, %.1f) is in quadrand II\n",x,y);
    else if(x<0&&y<0)
        printf("(%.1f, %.1f) is in quadrand III\n",x,y);
    else
        printf("(%.1f, %.1f) is in quadrand IV\n",x,y);
    return 0;
}

/**************************************************************
	Problem: 1162
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

