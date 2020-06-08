#include <stdio.h>
#include<stdlib.h>
int main()
{
    int a,back;
    while(scanf("%d",&a)&&a!=0)
    {
    back=a%10;
    switch(back){
case 1:
    printf("%dst\n",a);
    break;
 case 2:
    printf("%dnd\n",a);
    break;
case 3:
    printf("%drd\n",a);
    break;
default:
    printf("%dth\n",a);
    break;
    }
    }
    return 0;
}
/**************************************************************
	Problem: 1098
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

