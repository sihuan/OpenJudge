#include <stdio.h>

int get_m(int child,int mom){
  for(int i = 2;i<=child;i++){
    if(child%i==0){
      if(mom%i==0){
	child /= i;
	mom /= i;
	i--;
      }
    }
  }
  return mom;
}

int get_c(int child,int mom){
    for(int i = 2;i<=child;i++){
    if(child%i==0){
      if(mom%i==0){
	child /= i;
	mom /= i;
	i--;
      }
    }
  }
  return child;
}

int main(int argc,char *argv[]){
  int child,mom;
  while(scanf("%d/%d",&child,&mom)!=EOF){
    int zs = child/mom;
    int c,m;
    if(zs==0){
    c = get_c(child,mom);
    m = get_m(child,mom);
    }
    else{
      c = get_c(child-mom*zs,mom);
      m = get_m(child-mom*zs,mom);
    }
    
    if(zs==0){
      printf("%d/%d\n",c,m);
    }
    else{
      if(c==0)
	printf("%d\n",zs);
    
    else
      printf("%d+%d/%d\n",zs,c,m);
  }
  } 
  return 0;
}

/**************************************************************
	Problem: 1503
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

