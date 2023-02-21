#include <stdio.h>

struct point{
  double x;
  double y;
};

void get_point(struct point *p){
  scanf("(%lf, %lf)",&p->x,&p->y);
}
//四个象限输出为“quadrand I”、“quadrand II”、“quadrand III”、“quadrand IV”，x-轴和y-轴输出为“x axis”和“y axis”，原点输出为“origin”
//输出为以下三种：
//(-1.0, -2.5) is in quadrand III
//(0.0, 4.8) is on the y axis
//(0.0, 0.0) is origin

void judge_point(struct point p){
  double x = p.x;
  double y = p.y;
  if(x == 0){
    if(y == 0){
      printf("(%.1lf, %.1lf) is origin\n",x,y);
    }
    else{
      printf("(%.1lf, %.1lf) is on the y axis\n",x,y);
    }
  }
  else if(x > 0){
    if(y == 0){
      printf("(%.1lf, %.1lf) is on the x axis\n",x,y);
    }
    else if(y > 0){
      printf("(%.1lf, %.1lf) is in quadrand I\n",x,y);
    }
    else if(y < 0){
      printf("(%.1lf, %.1lf) is in quadrand IV\n",x,y);      
    }
  }
  else if(x < 0){
    if(y == 0){
      printf("(%.1lf, %.1lf) is on the x axis\n",x,y);      
    }
    else if(y > 0){
      printf("(%.1lf, %.1lf) is in quadrand II\n",x,y);
    }
    else if(y < 0){
      printf("(%.1lf, %.1lf) is in quadrand III\n",x,y);
    }
  }
}


int main()
{
    struct point p;
    get_point(&p);
    judge_point(p);
    return 0;
}
/**************************************************************
	Problem: 2039
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

