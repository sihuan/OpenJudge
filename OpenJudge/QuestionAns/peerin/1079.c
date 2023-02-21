#include <stdio.h>
int main(){
  int n,a,b,c;
  scanf("%d",&n);
  for(int i = 0;i< n;++i){
    scanf("%d %d %d",&a,&b,&c);
    printf("%s",a+b>c&&a+c>b&&b+c>a?"YES\n":"NO\n");
    
  }


  return 0;
}

/**************************************************************
	Problem: 1079
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

