#include <stdio.h>
int main()
 {
            int a;
            scanf("%d",&a);
            int b,c,d;
            b=a/100;
            c=(a/10)%10;
            d=(a%100)%10;
            if(b*b*b+c*c*c+d*d*d==a)
                printf("YES\n");
            else
                printf("NO\n");
            return 0;
       }

/**************************************************************
	Problem: 1012
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

