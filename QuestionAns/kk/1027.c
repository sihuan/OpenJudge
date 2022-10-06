#include<stdio.h>
int main()
{
	 int a,b;
	 scanf("%d%d",&a,&b);
	 int s=1,i;
	 printf("=====\n");
	 for(;b>=a;b--)
	 {
	 	int s=1;
	 	if(b==0||b==1)
			s=0;
	 	for(i=2;i<b;i++)
	 	{
	 		if(b%i==0)
	 		{
	 			s=0;
	 			break;
			}
		}
		if(s==1)
			printf("%d\n",b);

	 }
	 printf("=====");
	 return 0;
}

/**************************************************************
	Problem: 1027
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

