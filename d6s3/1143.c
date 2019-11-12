#include<stdio.h>

int print_graphic(int n, char c)
{
    int i,j,h,k;
    for (i=1,j=(n-1);i<=n;i++,j--){
        h=1,k=1;
        while(h<=j){
            printf(" ");
            h++;
        }
        while(k<(2*i-1)){
            printf("%c",c);
            k++;
        }
        printf("%c\n",c);
    }
}

int main()
{
    char c;
    int num;
    scanf("%d %c", &num, &c);
    print_graphic(num, c);
    return 0;
}

/**************************************************************
	Problem: 1143
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

