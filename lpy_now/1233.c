#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int is_primer(int num){
    int i,j=0;
    if(num==1){
    	return 0;
	}
    else{
        for(i=sqrt(num);i>1;i--){
            if(num%i==0){
                j++;
                return 0;
            }
        }
        if(j==0){
        	return 1;
		} 
    }
}
int main()
{
    int num;
    while(scanf("%d", &num) != EOF)
    {
        if(is_primer(num))
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}
/**************************************************************
	Problem: 1233
	User: 201901061011
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:756 kb
****************************************************************/

