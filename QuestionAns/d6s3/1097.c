#include<stdio.h>
int main()
{
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)){
        if (a==0&b==0&c==0)
            return 0;
        if ((a+b<=c) || (a+c<=b) || (b+c<=a))
            printf("not a triangle\n");
        else if (a==b && b==c && a==c)
            printf("a equileteral triangle\n");
        else if (a==b || a==c || b==c)
            printf("a isosceles triangle\n");
        else if ((a*a+b*b==c*c) || (b*b+c*c==a*a) || (a*a+c*c==b*b) )
            printf("a right triangle\n");
        else
            printf("a triangle\n");
    }
}

/**************************************************************
	Problem: 1097
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

