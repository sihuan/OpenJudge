#include<stdio.h>
  int main()
  {
      double low,high,step,C,F,i=1;
      char char1,char2;
      scanf("%c->%c",&char1,&char2);
      if(char1=='C'&&char2=='F')
      {   scanf("%lf",&low);
          scanf("%lf",&high);
          scanf("%lf",&step);
          printf("   C  ->    F\n");
          for(;low<=high+0.01;low+=step)
          {
             F=low*9/5+32;
             printf("%5.1lf -> %5.1lf\n",low,F);
          }
        }
        if(char1=='F')
      {   scanf("%lf",&low);
          scanf("%lf",&high);
          scanf("%lf",&step);
          printf("   F  ->    C\n");
          for(;low<=high+0.01;low+=step)
          {
             C=5*(low-32)/9;
             printf("%5.1lf -> %5.1lf\n",low,C);
           }



      }







      return 0;
  }



/**************************************************************
	Problem: 1028
	User: 201901061304
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

