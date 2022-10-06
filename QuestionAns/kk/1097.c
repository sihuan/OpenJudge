#include<stdio.h>
int main()
{
    int a,b,c;
    while(1)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a==0&&b==0&&c==0)
            break;
        if((a+b>c)&&(b+c>a)&&(a+c>b))
        {
            if(a==b&&a==c)
            {
                printf("a equileteral triangle\n");
                continue;
            }

            if((a==b&&a!=c)||(a==c&&a!=b)||(b==c&&b!=a))
            {
                printf("a isosceles triangle\n");
                continue;
            }
            if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a))
            {
                printf("a right triangle\n");
                continue;
            }
            printf("a triangle\n");
        }

        else printf("not a triangle\n");
    }

}
/**************************************************************
	Problem: 1097
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

