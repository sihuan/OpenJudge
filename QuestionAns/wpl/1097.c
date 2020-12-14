#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int a,b,c;
    while(scanf("%d%d%d",&a,&b,&c))
    {
        if(a+b>c&&b+c>a&&a+c>b){
            if(a==b||b==c||a==c){
                if(a==b&&b==c) printf("a equileteral triangle\n");
                else printf("a isosceles triangle\n");
            }
            else if(a*a+b*b==c*c||b*b+c*c==a*a||a*a+c*c==b*b) printf("a right triangle\n");
            else printf("a triangle\n");
        }
        else if(a==0||b==0||c==0) break;
        else printf("not a triangle\n");
    }
 
    return 0;
}

/**************************************************************
	Problem: 1097
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

