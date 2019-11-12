#include<stdio.h>
#include<math.h>
int main()
{
    int i,b=0;
    char a;
    char y[10] = {'a','e','i','o','u','A','E','I','O','U'};
    scanf("%c",&a);
    for (i=0;i<10;i++){
        if (a==y[i]){
            printf("yes");
            b=1;
        }
    }
    if(b==0)
        printf("no");
}

/**************************************************************
	Problem: 1347
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

