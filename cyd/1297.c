#include<stdio.h>

int output(int n)
{  if(n<1000||n>9000)return 0;
    int a=n+1,b,c,d,z;
   for(;a<=10000;a++)
     {     b=a/1000;c=a/100%10;d=a/10%10;z=a%10;
         if(b!=c&&b!=d&&b!=z&&
            c!=d&&c!=z&&d!=z)
            return a;


     }


}
int main()
{
    int n;
   while(scanf("%d",&n)!=EOF)
   {
       printf("%d\n",output(n));

   }
return 0;


}

/**************************************************************
	Problem: 1297
	User: 201901061304
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

