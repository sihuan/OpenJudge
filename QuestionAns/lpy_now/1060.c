#include<stdio.h>
#include<string.h>

char a[2000];
char max[2000];
char min[2000];
char l[2000];

int main(){
    //freopen("test.txt","r",stdin);
    int i,j,k,m;
    memset(l,0,sizeof(l));
    memset(a,0,sizeof(a));
    memset(max,0,sizeof(max));
    memset(min,0,sizeof(min));
    j=-1;
    k=9999;
    while(scanf("%s",l)!=EOF){
        memset(a,0,sizeof(a));
        for(i=0;i<=strlen(l)-1;++i){
            a[i]=l[strlen(l)-1-i];
        }
        memset(l,0,sizeof(l));
        i=strlen(a)-1;
        while(a[i]=='0')  {
            a[i]='\0';
            i--;
        }
        i=strlen(a)-1;
        if(i>j){
            memset(max,0,sizeof(max));
            strcpy(max,a);
            j=strlen(max)-1;
        }
        if(i==j){
            m=i;
            while(m>=0 && a[m]==max[m]){
                --m;
            }
            if(m==-1 && a[0]>max[0])  {
                memset(max,0,sizeof(max));
                strcpy(max,a);
                j=strlen(max)-1;
            }
            if(m!=-1 && a[m]>max[m]){
              memset(max,0,sizeof(max));
              strcpy(max,a);
              j=strlen(max)-1;
            }
        }
        if(i<k){
            memset(min,0,sizeof(min));
            strcpy(min,a);
            k=strlen(min)-1;
        }
        if(i==k){
            m=i;
            while(m>=0 && a[m]==min[m]){
                --m;
            }
            if(m==-1 && a[0]<min[0]){
                memset(min,0,sizeof(min));
                strcpy(min,a);
                k=strlen(min)-1;
            }
            if(m!=-1 && a[m]<min[m]){
                memset(min,0,sizeof(min));
                strcpy(min,a);
                k=strlen(min)-1;
            }
        }
    }
    if(j==-1){
        printf("The maximum value is : 0");
    }
    else{
        printf("The maximum value is : ");
        for(m=j;m>=0;--m){
            printf("%c",max[m]);
        }
    }
    printf("\n");
    if(k==-1){
        printf("The minimum value is : 0");
    }
    else{
        printf("The minimum value is : ");
        for(m=k;m>=0;m--){
            printf("%c",min[m]);
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1060
	User: 201901061011
	Language: C
	Result: Accepted
	Time:24 ms
	Memory:756 kb
****************************************************************/

