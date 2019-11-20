#include<stdio.h>
#include<string.h>

int main()
{
    int m,n,h,i,j,k,a,b,f,ll;
    scanf("%d",&m);
    for(i=1;i<=m;i++){
        scanf("%d",&n);
        int s[1000]={0};
        for(j=1,b=0,ll=0;j<=n;j++){
            scanf("%d",&a);
            if(a==0&&ll==0){
                s[b]=a;
                b++;
                ll++;
            }
            for(k=0,f=0;k<1000;k++){
                if(s[k]==a){
                    f=1;
                    break;
                }
            }
            if(f==0){
                s[b]=a;
                b++;
            }
        }
        for(h=0;h<b;h++)
            if(h==0)
                printf("%d",s[h]);
            else
                printf(" %d",s[h]);
        printf("\n");
    }

}

/**************************************************************
	Problem: 1176
	User: 201901060610
	Language: C
	Result: Accepted
	Time:28 ms
	Memory:748 kb
****************************************************************/

