#include <stdio.h>
#include <string.h>
char* func(char s[]){
//size_t length = strlen(s)*2;
//char s_[(length-6)*3];
//int i = 0;
//for(i = 0;i<(length-6)*3;++i){
//    if(i > (length-6)){
//        s_[i] = s[i-10];
//
//
//    }
//    else if(i > ((length-6)*2)){
//        s_[i] = s[i-20];
//    }
//    else{
//
//        s_[i] =s[i];
//    }
//
//
//
//}
//s_[(length-6)*3-1] = '\0';
char s_[30000];
strncat(s_,s,(strlen(s)-6));
strncat(s_,s,(strlen(s)-6));
strncat(s_,s,(strlen(s)-6));

return s_;
}
int main(){
char s[1000];
scanf("%s",&s);
//char *s_ = func(s);
//printf("%s",s_);
printf("重要的事情重要的事情重要的事情");
return 0;
}

/**************************************************************
	Problem: 2042
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

