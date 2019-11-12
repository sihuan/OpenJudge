#include<stdio.h>
int main()
{
    int a,b;
    char c;
    while(scanf("%d%c%d",&a,&c,&b)){
        if  (a==0 && b==0 && c==' '){
            break;
        }
        else{
            switch (c)
            {
            case '+':
                printf("%d\n",a+b);
                break;
            
            case '-':
                printf("%d\n",a-b);
                break;

            case '*':
                printf("%d\n",a*b);
                break;

            case '/':
                printf("%d\n",a/b);
                break;

            case '%':
                printf("%d\n",a%b);
                break;

            default:
                printf("invalid op\n");
            }
        }
    }
}
/**************************************************************
	Problem: 1026
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

