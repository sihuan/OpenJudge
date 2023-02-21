#include <stdio.h>
#define MAX_STR_LEN 100

int str_cmp(char s1[],char s2[]){
    for(int i = 0;s1[i]!='\0';++i){
      int d = s1[i]-s2[i];
      if(d!=0)return d;
}
    return 0;
}


int main()
{
    char str1[MAX_STR_LEN], str2[MAX_STR_LEN];
    while( (gets(str1) != NULL) && (gets(str2) != NULL) )
        printf("%d\n", str_cmp(str1, str2));
    return 0;
}
/**************************************************************
	Problem: 1138
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

