#include <stdio.h>
int main()
{
      double x,y;
      scanf("(%lf, %lf)",&x,&y);
      if(x==0.0&&y==0.0) printf("(%.1lf, %.1lf) is origin",x,y);
      else if(x==0.0&&y!=0.0) printf("(%.1lf, %.1lf) is on the y axis",x,y);
      else if(x!=0.0&&y==0.0) printf("(%.1lf, %.1lf) is on the x axis",x,y);
      else if(x>0.0&&y>0.0) printf("(%.1lf, %.1lf) is in quadrand I",x,y);
      else if(x<0.0&&y>0.0) printf("(%.1lf, %.1lf) is in quadrand II",x,y);
      else if(x<0.0&&y<0.0) printf("(%.1lf, %.1lf) is in quadrand III",x,y);
      else if(x>0.0&&y<0.0) printf("(%.1lf, %.1lf) is in quadrand IV",x,y);


    return 0;
}

/**************************************************************
	Problem: 1162
	User: 201901061304
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

