#include<stdio.h>

void deal(int plate,int p1,int p2,int p3){
    if(plate==1){
        printf("   plate %d : from %d to %d\n",plate,p1,p3);
        return ;
    }
    else{
        deal(plate-1,p1,p3,p2);
        printf("   plate %d : from %d to %d\n",plate,p1,p3);
        deal(plate-1,p2,p1,p3);
    }
}

int main(){
    //freopen("test data.txt","r",stdin);
    //freopen("testdata1.txt","w",stdout);
    int plate,p1,p2,p3;
    int cnt=0,flag=1;
    while(scanf("%d%d%d%d",&plate,&p1,&p2,&p3)!=EOF){
        if(flag==1){
            flag=0;
        }
        else{
            printf("\n");
        }
        printf("case %d :\n",++cnt);
        deal(plate,p1,p2,p3);
    }
    return 0;
}

/**************************************************************
	Problem: 1245
	User: 201901061011
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

