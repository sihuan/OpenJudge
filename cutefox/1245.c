#include <stdio.h>

void hanio(int n,int a,int b,int c){
    if(n==1)
 printf("   plate %d : from %d to %d\n",n,a,c);
else{
            hanio(n-1,a,c,b);
            printf("   plate %d : from %d to %d\n",n,a,c);  //打印A移动到C
            hanio(n-1,b,a,c);                    //n-1次 B通过A移动到C
        }
    }
int main() {
    int n,a,b,c,i=0;
    while(scanf("%d%d%d%d",&n,&a,&b,&c)!=EOF){
            i++;
        if(i>1){
            printf("\n");
            printf("case %d :\n",i);

            }
         if(n==1){
            printf("case %d :\n",i);
            }
                         hanio(n,a,b,c);


    }
    return 0;
}

/**************************************************************
	Problem: 1245
	User: 201901060203
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

