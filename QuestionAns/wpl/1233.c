#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int is_primer(int num)
{
   int i,b,c;
   if(num==1)
    return 0;
    c=sqrt(num)+1;
   for(i=2;i<c;i++)
   {
       b=num%i;
       if(b==0)
        return 0;
   }
   return 1;
}
int main()
{
    int num;
    while(scanf("%d", &num) != EOF)
    {
        if(is_primer(num))
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}
/**************************************************************
	Problem: 1233
	User: 201901060819
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:756 kb
****************************************************************/

