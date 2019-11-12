#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d",&a) && a!=0){
        if(a>=10)
            b = a%10;
        else
            b=a;
        switch(b){
        case 1: printf("%dst\n",a); break;
        case 2: printf("%dnd\n",a); break;
        case 3: printf("%drd\n",a); break;
        default: printf("%dth\n",a);
        }
    }
}

/**************************************************************
	Problem: 1098
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

