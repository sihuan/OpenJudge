#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_LEN 500000
 
int sushu(int n){
    int sqrtn=(int)sqrt((double)n);
    int i;
    if(n==2){
        return 1;
    }
    if(n%2==0||n==1){
        return 0;
    }
    else{
        for(i=3;i<=sqrtn;i+=2){
            if(n%i==0){
                return 0;
            }   
        }
    }
    return 1;
}

int main(){
    int x,y,count;
    while(scanf("%d%d",&x,&y) != EOF){
        int i,str[MAX_LEN];
        memset(str,0,sizeof(str));
        for(i=x;i<=y;++i){
            if(str[i]<0){
                continue;
            }
            if(sushu(i)==1){
                int flag;
                for(flag=i+1;flag<=y;++flag){
                    if(flag%i==0){
                        str[flag]=-1;
                    }
                }
                str[i]=1;
            }
        }
        count=0;
        for(i=x;i<=y;++i){
            if(str[i]==1){
                printf("%d\n",i);
                ++count;
            }
        }
        if(count==0){
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
/**************************************************************
	Problem: 1179
	User: 201901061011
	Language: C
	Result: Accepted
	Time:200 ms
	Memory:2636 kb
****************************************************************/

