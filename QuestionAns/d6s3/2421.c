#include <stdio.h>

int main()
{
    int i, j, t;
    int ar[15];
    for(i=0; i<15; i++){
        scanf("%d", &ar[i]);
    }
    for(i=0; i<14; i++){
        for(j=0; j<14-i; j++){
            if(ar[j]>ar[j+1]){
                t=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=t;
            }
        }
    }
    for(i=14; i>=0; i--){
        if(ar[i]!=ar[14])
            break;
    }
    printf("%d", ar[i]);
}

/**************************************************************
	Problem: 2421
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

