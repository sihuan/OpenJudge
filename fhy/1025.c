#include <stdio.h>


int main()
{   int a,b;
    while(scanf("%d",&a)!=EOF)
    {if(a>100|| a<0)
        {
           printf("Error\n");
        }
        else
        {
          b=a/10;
         switch(b)
         {
           case 10:
           case 9:  printf("Excellent\n");break;
           case 8:  printf("Good\n");break;
           case 7:  printf("Average\n");break;
           case 6:  printf("Pass\n");break;
           case 5:
           case 4:
           case 3:
           case 2:
           case 1:
           case 0:  printf("Failing\n");break;

        }
}
    }
    return 0;
}
/**************************************************************
	Problem: 1025
	User: 201901100103
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

