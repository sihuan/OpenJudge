#include <stdio.h>
#include <string.h>

int get_digit_sum_as_string(char *s,int sum){
  int s_len = strlen(s);
  

    if(s[0]=='\0'){
      return sum;

    }
    else{
      int num = s[0]-'0';
      sum += num;
      get_digit_sum_as_string(s+1,sum);
    

  }
}




int main(){
  int n;
  scanf("%d",&n);
  for(int i = 0;i<n;++i){
    char input[1000]={0};
    scanf("%s",input);
    printf("%s",get_digit_sum_as_string(input,0)%3==0?"Yes\n":"No\n");
  }


  return 0;
}

/**************************************************************
	Problem: 1187
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

