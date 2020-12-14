#include<stdio.h>

int main(){
    //freopen("ans.txt","r",stdin);
    int flag,num,k=1,max;
    while(scanf("%d",&num)!=EOF){
        if(k==1){
            max=num;
            flag=1;
            ++k;
        }
        else{
            if(max<num){
                flag=k;
                max=num;
            }
            ++k;
        }
    }
    printf("max = %d, order = %d.",max,flag);
    return 0;
}

/**************************************************************
	Problem: 2230
	User: 201901061011
	Language: C
	Result: Accepted
	Time:24 ms
	Memory:748 kb
****************************************************************/

