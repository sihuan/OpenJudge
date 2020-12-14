#include<stdio.h>
#include<string.h>

int num[150][150];

int main(){
    //freopen("test data.txt","r",stdin);
    //freopen("test data1.txt","w",stdout);
    int n;
    int flag=1;
    while(scanf("%d",&n)!=EOF){
        memset(num,0,sizeof(num));
        if(flag==1){
            flag=0;
        }
        else{
            printf("\n\n");
        }
        num[1][n/2+1]=1;
        int i,j;
        int flag_x=1,flag_y=n/2+1;
        for(i=2;i<=n*n;++i){
            int new_x=flag_x,new_y=flag_y;
            --new_x,++new_y;
            if(new_x==0){
                new_x=n;
            }
            if(new_y==n+1){
                new_y=1;
            }
            if(num[new_x][new_y]!=0 || (flag_x==1 && flag_y==n)){
                new_x=flag_x+1,new_y=flag_y;
            }
            num[new_x][new_y]=i;
            flag_x=new_x,flag_y=new_y;
        }
        for(i=1;i<=n;++i){
            for(j=1;j<=n;++j){
                printf("%d",num[i][j]);
                if(j==n && i!=n){
                    printf("\n");
                }
                else if(j!=n){
                    printf(" ");
                }
            }
        }
    }
    return 0;
}
/**************************************************************
	Problem: 1048
	User: 201901061011
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:836 kb
****************************************************************/

