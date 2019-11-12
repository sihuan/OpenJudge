#include <stdio.h>
int main()
 {
            int a;
            scanf("%d",&a);
            if((a%4==0&&a%100!=0)||a%400==0)
                printf("Yes\n");
            else
                printf("No");
            return 0;
       }

/**************************************************************
	Problem: 1010
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

