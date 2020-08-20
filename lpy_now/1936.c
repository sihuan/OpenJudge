#include<stdio.h>

int count[15];

int main(){
    //freopen("test data.txt","r",stdin);
    int n;
    int ab=0,in=0;
    int tic=0;
    scanf("%d",&n);
    int num;
    while(scanf("%d",&num)!=EOF){
        ++tic;
        if(num>=1 && num<=n){
            ++count[num];
        }
        else if(num==0){
            ++ab;
        }
        else{
            ++in;
        }
    }
    int i;
    for(i=1;i<=n;++i){
        printf("Person %d : %d\n",i,count[i]);
    }
    printf("Abstention : %d\n",ab);
    printf("Invalid ballots : %d",in);
    return 0;
}

/**************************************************************
	Problem: 1936
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

