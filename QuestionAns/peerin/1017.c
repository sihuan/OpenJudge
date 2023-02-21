#include <stdio.h>
#include <stdlib.h>
int main(){
char *s1,*s2;
s1 = (char *)malloc(sizeof(char)*27);
s2 = (char *)malloc(sizeof(char)*27);
//scanf("%s",s1);
//scanf("%s",s2);
gets(s1);
gets(s2);
int len1,len2;
for(int i = 0;i < 27;++i){
if(s1[i] == '\0'){
len1 = i+1;
break;
}
}
for(int i = 0;i < 27;++i){
if(s2[i] == '\0'){
len2 = i+1;
break;
}
}
if(len1<=len2){
printf("%s\n%s",s2,s1);
}else{

printf("%s\n%s",s1,s2);
}
free(s1);
free(s2);
return 0;
}
/**************************************************************
	Problem: 1017
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

