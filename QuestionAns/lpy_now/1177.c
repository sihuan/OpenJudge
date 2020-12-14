#include<stdio.h>

int s1[1500],s2[1500],s3[1500],s4[1500],s5[1500];

int main(){
    //freopen("test data.txt","r",stdin);
    int score;
    int ss1=0,ss2=0,ss3=0,ss4=0,ss5=0;
    while(scanf("%d",&score)!=EOF){
        if(score<0 || score>100){
            continue;
        }
        if(score>=90){
            s1[ss1]=score;
            ++ss1;
        }
        else if(score>=80){
            s2[ss2]=score;
            ++ss2;
        }
        else if(score>=70){
            s3[ss3]=score;
            ++ss3;
        }
        else if(score>=60){
            s4[ss4]=score;
            ++ss4;
        }
        else{
            s5[ss5]=score;
            ++ss5;
        }
    }
    int i;
    printf("Excellent : %d\n",ss1);
    if(ss1!=0){
        for(i=0;i<ss1;++i){
            printf("%d",s1[i]);
            if(i!=ss1-1){
                printf(", ");
            }
        }
        printf("\n");
    }
    printf("Good : %d\n",ss2);
    if(ss2!=0){
        for(i=0;i<ss2;++i){
            printf("%d",s2[i]);
            if(i!=ss2-1){
                printf(", ");
            }
        }
        printf("\n");
    }
    printf("Average : %d\n",ss3);
    if(ss3!=0){
        for(i=0;i<ss3;++i){
            printf("%d",s3[i]);
            if(i!=ss3-1){
                printf(", ");
            }
        }
        printf("\n");
    }
    printf("Pass : %d\n",ss4);
    if(ss4!=0){
        for(i=0;i<ss4;++i){
            printf("%d",s4[i]);
            if(i!=ss4-1){
                printf(", ");
            }
        }
        printf("\n");
    }
    printf("Failing : %d\n",ss5);
    if(ss5!=0){
        for(i=0;i<ss5;++i){
            printf("%d",s5[i]);
            if(i!=ss5-1){
                printf(", ");
            }
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1177
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:776 kb
****************************************************************/

