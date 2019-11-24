#include<stdio.h>
int main()
{
    int a;
   while(scanf("%d",&a)!=EOF)
   {



    if(a>=0&&a<=100)

    switch(a/10)
    {

    case 10:printf("Excellent\n");break;
    case 9:printf("Excellent\n");break;
    case 8:printf("Good\n");break;
    case 7:printf("Average\n");break;
    case 6:printf("Pass\n");break;
    default:printf("Failing\n");

    }

    else
        printf("Error\n");
   }
    return 0;


}
/**************************************************************
	Problem: 1025
	User: 201801020908
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

