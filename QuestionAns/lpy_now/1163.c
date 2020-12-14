#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
    int a,b;
    scanf("%d:%d",&a,&b);
    if(a==12 && b==0){
        printf("12:00 p.m.");
        return 0;
    }
    if((a==0 && b==0) || (a==24 && b==0)){
        printf("12:00 a.m.");
        return 0;
    }
    if(a>12){
        a-=12;
        if(a<10){
            printf("0%d:",a);
        }
        else{
            printf("%d:",a);
        }
        if(b<10){
            printf("0%d p.m.",b);
        }
        else{
            printf("%d p.m.",b);
        }
        return 0;
    }
    else if(a<12){
        if(a==0){
            if(b<10){
                printf("12:0%d a.m.",b);
            }
            else{
                printf("12:%d a.m.",b);
            }
            return 0;
        }
        if(a<10){
            printf("0%d:",a);
        }
        else{
            printf("%d:",a);
        }
        if(b<10){
            printf("0%d a.m.",b);
        }
        else{
            printf("%d a.m.",b);
        }
        return 0;
    }
    else if(a==12){
        if(b<10){
            printf("12:0%d p.m.",b);
        }
        else{
            printf("12:%d p.m.",b);
        }
        return 0;
    }
    return 0;
}

/**************************************************************
	Problem: 1163
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

