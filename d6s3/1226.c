#include<stdio.h>
#include<math.h>
int main()
{
    int i=1,a,b,h,j,k,m;
    while(scanf("%d %d",&a,&b)!=EOF){
        m=0;
        printf("case %d:",i++);
        for(h=a;h<=b;h++){
            for(j=h+1;j<=b;j++){
                k = (int)sqrt(h*h+j*j);
                if((h*h+j*j==k*k)&&(k<=b)&&(h+j>k)&&(h+k>j)&&(j+k>h)){
                    if(m==0){
                        printf("%d,%d,%d",h,j,k);
                        m++;
                    }
                    else
                        printf(";%d,%d,%d",h,j,k);
                }
            }
        }
        if (m==0)
            printf("No pythagorean triple");
        printf("\n");
    }
}

/**************************************************************
	Problem: 1226
	User: 201901060610
	Language: C
	Result: Accepted
	Time:380 ms
	Memory:756 kb
****************************************************************/

