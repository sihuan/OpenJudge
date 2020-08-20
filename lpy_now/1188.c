#include <stdio.h>
#include <ctype.h>
#include <math.h>
#define MAX_STR_LEN 10 + 5
double strToDouble(char str[]){
    int state=0;
    double sum1 = 0.0;
    double sum2 = 0.0;
    int k=1;
    int digited=0;
    int fuhao=1;
    if(!str[0])return 0;
    for(int i=0;str[i];i++){
        if(digited==0&&str[i]=='-')
        {
            digited=1;
            fuhao = -1;
        }
        if(digited==0&&str[i]=='+'){
            digited=1;
            fuhao = 1;      
        }
        if(isdigit(str[i])){
            digited=1;
            if(!state)sum1=10*sum1 +str[i]-'0';
            else sum2+=(pow(0.1,k++))*(str[i]-'0');
        }
        else if(str[i]=='.'){
            digited=1;
            state=1;
        }
    }
    return fuhao*(sum1 + sum2);
}
 


int main()
{
    char s[MAX_STR_LEN];
    while(gets(s) != NULL)
        printf("%lg\n", strToDouble(s));
    return 0;
}
/**************************************************************
	Problem: 1188
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:760 kb
****************************************************************/

