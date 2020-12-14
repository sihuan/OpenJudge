#include<stdio.h>
#define MAX_STR_LEN 110

int str_cmp(char *str1,char *str2){
    int i=0;
    while(1){
        if(str1[i]==str2[i]){
            if(str1[i]=='\0'){
                return 0;
            }
            ++i;
        }
        if(str1[i]!=str2[i]){
            return str1[i]-str2[i];
        }
    }
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
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

