#include <stdio.h>
/*
若输入的三条边构成等边三角形，输出“a equileteral triangle”；

若输入的三条边构成等腰三角形，输出“a isosceles triangle”；

若输入的三条边构成直角三角形，输出“a right triangle”；

若输入的三条边构成三角形，但不是以上三种，则输出“a triangle”；

若输入的三条边不构成，输出“not a triangle”。
 */
int main(){

  int a,b,c;
  while(scanf("%d%d%d",&a,&b,&c)!=EOF){
    if(a==0&&b==0&&c==0)
      break;
    printf("%s",a+b>c&&a+c>b&&b+c>a&&a-b<c&&b-a<c&&a-c<b&&c-a<b&&b-c<a&&c-b<a?a==b&&b==c?"a equileteral triangle\n":a==b||b==c||a==c?"a isosceles triangle\n":a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a?"a right triangle\n":"a triangle\n":"not a triangle\n");
  }
}

/**************************************************************
	Problem: 1097
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

