#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c) && a!=0)
    {
        if(a==b && b==c) printf("a equileteral triangle\n");
        else if(a+b<=c || a+c<=b || b+c<=a)
            printf("not a triangle\n");
        else if(a==b || b==c || c==a)
            printf("a isosceles triangle\n");
        else if(a*a+b*b==c*c || b*b+c*c==a*a || c*c+a*a==b*b)
            printf("a right triangle\n");
        else
            printf("a triangle\n");
    }

    return 0;
}

/**************************************************************
	Problem: 1097
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

