#include<stdio.h>
int main()
  {

      int a,b,c,n;

      {while(scanf("%d %d %d",&a,&b,&c)!=EOF)
        if(a==0&&b==0&&c==0) break;
      else  if(a+b>c&&a-b<c&&a+c>b&&a-c<b&&b-c<a&&b+c>a )
        {
            if(a==b&&b==c) printf("a equileteral triangle\n");
            else if((a==b&&b!=c)||(b==c&&a!=b)||(a==c&&c!=b)) printf("a isosceles triangle\n");
            else if((a*a==b*b+c*c)||(b*b==c*c+a*a)||(c*c==b*b+a*a)) printf("a right triangle\n");
            else printf("a triangle\n");
        }

       else printf("not a triangle\n");


      }
      return 0;
  }

/**************************************************************
	Problem: 1097
	User: 201901061304
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

