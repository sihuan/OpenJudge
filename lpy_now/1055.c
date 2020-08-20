#include <stdio.h>

int main(){
    int i,j,m,n,k=0,bm,bn,l;
    int a[105][105]={0},b[105][105]={0},c[105][105]={0};
    while(1){
        scanf("%d%d",&m,&n);
        if(m==0&&n==0){
            break;
        }
        else{
            ++k;
            if(k==1){
                bm=m;
                bn=n;
                for(i=1;i<=m;++i){
                    for(j=1;j<=n;++j){
                        scanf("%d",&b[i][j]);
                    }
                }
            }
            else{
                for(i=1;i<=m;++i){
                    for(j=1;j<=n;++j){
                        scanf("%d",&a[i][j]);
                    }
                }
            }
            if(k==1){
                continue;
            }
            else{
                if(bn==m&&m!=0&&n!=0&&bm!=0){
                    for(i=1;i<=bm;i++){
                        for(j=1;j<=n;j++){
                            c[i][j]=0;
                            for(l=1;l<=m;l++){
                                c[i][j]+=b[i][l]*a[l][j];
                            }
                        }
                    }
                    for(i=1;i<=bm;++i){
                        for(j=1;j<=n;++j){
                            b[i][j]=c[i][j];
                        }
                    }
                    bm=bm;
                    bn=n;
                }
                else{
                    printf("Not satisfied the definition of matrix multiplication!\n\n");
                    for(i=1;i<=m;++i){
                        for(j=1;j<=n;++j){
                            b[i][j]=a[i][j];
                        }
                    }
                    bm=m;
                    bn=n;
                    continue;
                }
            }
            for(i=1;i<=bm;++i){
                printf("%d",b[i][1]);
                for(j=2;j<=bn;++j){
                    printf(" %d",b[i][j]);
                }
                printf("\n");
            }
            printf("\n");
        }

    }
    return 0;
}


/**************************************************************
	Problem: 1055
	User: 201901061011
	Language: C
	Result: Accepted
	Time:16 ms
	Memory:804 kb
****************************************************************/

