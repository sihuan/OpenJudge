#include<stdio.h>

int main()
{
    int m,i,x,sum=0,a,sp,spp;
    int bjrs[27];
    scanf("%d",&m);
    for(i=0;i<m;i++){
        scanf("%d",&a);
        sum+=a;
        bjrs[i]=a;
    }
    while(scanf("%d",&x)!=EOF){
        while(x>sum)
            x-=sum;
        sp=0;
        spp=0;
        for(i=0;i<m;i++){
            sp+=bjrs[i];
            if(x<=sp){
                printf("Class %c : %d\n",i+65,x-spp);
                break;
            }
            spp+=bjrs[i];
        }
    }
}

/**************************************************************
	Problem: 1248
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

