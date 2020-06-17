#include<stdio.h>

void print_graphic(int a, char c)
{

            int i, j;

            for (j=a; j>0; j--) {
                for (i=1; i<j; i++) {
                    printf(" ");
                }
                for (i=0; i<(a-j+1)*2-1; i++) {
                    printf("%c", c);
                }
                printf("\n");
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
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

