#include <stdio.h>
#include <string.h>
#include <string.h>
#include <ctype.h>
int time = 0;
char str[200];
char big[200];
char name[500];
int checkbig()
{
    int i;
    for(i = 0;str[i];++i){
        if(!isupper(str[i])) return 0;
        else continue;
    }
    return 1;
}
int getname()
{
    int i,j=0,k=0;
    char c;
    for(i=0;;++i){
        scanf("%c",&c);
        if(i==0 && c=='('){
            continue;
            getchar();
        }
        else if(i==0 && c!='(') return 0;
        else if(c == ')') {
            name[k] = 0;
            break;
        }
        else if(i&&isupper(c)){
            if(c==str[j++])
            name[k++] = c;
            else break;
        }
        else {
            name[k++] = c;
        }
    }
    if(time==0){
        printf("Abbreviation ==> Full Name\n");
        time++;
    }
    //printf("%d:",time++);
    if(time<=10){
    }
    int u = 10 - strlen(str) - time /10;
    printf("%d:",time++);
    while(u--)putchar(' ');
    printf("%s ==> ",str);
    puts(name);
    return 0;
}
int main()
{
    /*printf("Abbreviation ==> Full Name\n");
    printf("1:     ENIAC ==> Electronic Numerical Integrator And Computer\n");
    freopen("suolueci.txt","r",stdin);*/
    while(scanf("%s",str)!=EOF)
    {
        if(checkbig()==1){
            getchar();//读去空格
            getname();
        }
        else continue;
    }
    if(time==0){
        printf("There is no abbreviations in this text.\n");
    }
    return 0;
}
/**************************************************************
	Problem: 1063
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

