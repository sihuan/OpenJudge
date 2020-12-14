#include<stdio.h>

int main()
{
    double x,y;
    scanf("(%lf, %lf)",&x,&y);
    if (x==0.0 && y==0.0){
        printf("(0.0, 0.0) is origin");
        return 0;
    }
    else{
        if (x==0.0){
            printf("(0.0, %.1lf) is on the y axis",y);
            return 0;
        }
        if (y==0.0){
            printf("(%.1lf, 0.0) is on the x axis",x);
            return 0;
        }
        if (x>0.0){
            if (y>0.0)
                printf("(%.1lf, %.1lf) is in quadrand I",x,y);
            else
                printf("(%.1lf, %.1lf) is in quadrand IV",x,y);
        }
        else{
            if (y>0.0)
                printf("(%.1lf, %.1lf) is in quadrand II",x,y);
            else
                printf("(%.1lf, %.1lf) is in quadrand III",x,y);
        }
    }
}

/**************************************************************
	Problem: 1162
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

