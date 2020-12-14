#include<stdio.h>
int main()
{
  int i,j,x,y;
  scanf("%d%d",&x,&y);
  printf("=====\n");
     for(i=y;i>=x;i--)
  {     if(i==2)
            printf("2\n");
        else
            for(j=2;j<=i-1;j++)
      {
          if(i%j==0)
            break;
          if(j==i-1)
            printf("%d\n",i);
      }
  }
  printf("=====\n");




    return 0;
}
/**************************************************************
	Problem: 1027
	User: 201801020908
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

