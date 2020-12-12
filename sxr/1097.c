#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
        if(a==0&&b==0&&c==0)
            break;
        else if(a==0||b==0||c==0)
            printf("not a triangle\n");
        else if(a+b<=c||a+c<=b||b+c<=a)
            printf("not a triangle\n");
        else if(a==b&&b==c)
            printf("a equileteral triangle\n");
        else if(a==b||a==c||b==c)
            printf("a isosceles triangle\n");
        else if(a*a+b*b==c*c||a*a+c*c==b*b||c*c+b*b==a*a)
            printf("a right triangle\n");
        else
            printf("a triangle\n");

    }
    return 0;
}
/**************************************************************
	Problem: 1097
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

