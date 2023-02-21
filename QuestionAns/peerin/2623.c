#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define add_elt(array,idx,elt) \
  (array)[(idx)]=(elt);\
  (idx)++;

bool evenp(int n) {return n%2==0?true:false;}
bool oddp(int n) {return n%2==0?false:true;}

void str_sep(char even[], char odd[], char s[]) {
  int len = strlen(s);
  int even_idx=0,odd_idx=0;
  for (int i = 0; i<len; ++i) {
    if (oddp(i)) {
      add_elt(odd, odd_idx, s[i]);
    } else {
      add_elt(even, even_idx, s[i]);
    }
  }
  odd[odd_idx]='\0';
  even[even_idx]='\0';
 }


int main()
{
    char r[101], s[101], t[101];
    gets(r);
    str_sep(s, t, r);
    puts(s);
    puts(t);
    return 0;
}

/**************************************************************
	Problem: 2623
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

