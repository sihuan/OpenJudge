#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
    //freopen("test.txt","r",stdin);
    //freopen("test1.txt","w",stdout);
    int flag=0;
    int n=0;
    char ch[150000];
    while(gets(ch)!=NULL){
        if(flag==0){
            flag=1;
        }
        else if(flag==1){
            printf("\n\n");
        }
        ++n;
        int len=strlen(ch);
        int i;
        int a=0,e=0,ii=0,o=0,u=0,tot=0,s=0;
        for(i=0;i<len;++i){
            if(ch[i]=='A' || ch[i]=='a'){
                ++a;
            }
            else if(ch[i]=='E' || ch[i]=='e'){
                ++e;
            }
            else if(ch[i]=='I' || ch[i]=='i'){
                ++ii;
            }
            else if(ch[i]=='O' || ch[i]=='o'){
                ++o;
            }
            else if(ch[i]=='U' || ch[i]=='u'){
                ++u;
            }
            else if(isalpha(ch[i])==0){
                ++s;
            }
        }
        tot=len-s;
        printf("case %d :\n",n);
        if(tot==0){
            printf("A :  0.0000%%\nE :  0.0000%%\nI :  0.0000%%\nO :  0.0000%%\nU :  0.0000%%");
            continue;
        }
        if(a==tot){
            printf("A : %8.4lf",(double)(a)/(double)(tot)*100);
            putchar('%');
        }
        else if(a!=tot){
            printf("A : %7.4lf",(double)(a)/(double)(tot)*100);
            putchar('%');
        }
        if(e==tot){
            printf("\nE : %8.4lf",(double)(e)/(double)(tot)*100);
            putchar('%');
        }
        else if(e!=tot){
            printf("\nE : %7.4lf",(double)(e)/(double)(tot)*100);
            putchar('%');
        }
        if(ii==tot){
            printf("\nI : %8.4lf",(double)(ii)/(double)(tot)*100);
            putchar('%');
        }
        else if(ii!=tot){
            printf("\nI : %7.4lf",(double)(ii)/(double)(tot)*100);
            putchar('%');
        }
        if(o==tot){
            printf("\nO : %8.4lf",(double)(o)/(double)(tot)*100);
            putchar('%');
        }
        else if(o!=tot){
            printf("\nO : %7.4lf",(double)(o)/(double)(tot)*100);
            putchar('%');
        }
        if(u==tot){
            printf("\nU : %8.4lf",(double)(u)/(double)(tot)*100);
            putchar('%');
        }
        else if(u!=tot){
            printf("\nU : %7.4lf",(double)(u)/(double)(tot)*100);
            putchar('%');
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1237
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:820 kb
****************************************************************/

