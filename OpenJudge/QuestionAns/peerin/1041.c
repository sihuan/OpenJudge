#include <stdio.h>

int abs(int a){

  return a<=0?-a:a;

  }
int min(int a,int b){

  return a<b?a:b;

}
int max(int a,int b){

  return a>b?a:b;


}
/* int gcd(int a,int b){ */

/*   if(a==0) */
/*     return b; */
/*   else if(b == 0) */
/*     return a; */
/*   else { */
/*     return gcd(min(a,b),abs(a-b)); */
/*   } */
/* } */
int gcd(int a, int b){
  int tmpp = a;
 tmpp= max(a,b);
  b = min(a,b);
  a = tmpp;
  int temp = 2147483647;
 loop:
  for(;temp>=b;){   
 temp = a % b;
 if(temp==0)
   return b;
}
  int tmp = b;
  b = temp;
  a = tmp;
  temp = 2147483647;
  goto loop;

}

int lcm(int a,int b){
  

  return a/gcd(a,b)*b;

}

int main(){
  int a, b;
  //  printf("%d",gcd(1,1));
  while(scanf("%d %d",&a,&b)!=EOF){
    if(a == 0 && b == 0){
      printf("%d %d\n",0,0);
    }
    else if(a == 0){
      printf("%d %d\n",b,0);
    }else if(b==0){
  printf("%d %d\n",a,0);
    }
    else
    printf("%d %d\n",gcd(a,b),lcm(a,b));
  }


  return 0;
}

/**************************************************************
	Problem: 1041
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

