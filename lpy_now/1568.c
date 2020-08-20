#include <stdio.h>

void str_trans(char s[]){
	int flag=0;
	while(s[flag]!='\0'){
		if(s[flag]>='a' && s[flag]<='z'){
			s[flag]=(char)(s[flag]-32);
		}
		else if(s[flag]>='A' && s[flag]<='Z'){
			s[flag]=(char)(s[flag]+32);
		}
		++flag;
	}
}
#include <stdio.h>
int main()
{ char s[101];
  gets(s);
  str_trans(s);
  puts(s);
  return 0;
}
/**************************************************************
	Problem: 1568
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

