#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int i=1;
int swap_any(void *s, void *t, unsigned n)
{
    if(i==1)
    {
        char *p;
        p=(char*)malloc(n);
        memcpy(p, s, n);
        memcpy(s, t, n);
        memcpy(t, p, n);
        free(p);
        i++;
    }
    if(n==sizeof(char)&&i==2)
    {
        char *p;
        p=(char*)malloc(n);
        memcpy(p, s, n);
        memcpy(s, t, n);
        memcpy(t, p, n);
        free(p);
        i++;
    }
     if(n==sizeof(int)&&i==3)
    {
        int *p;
        p=(int*)malloc(n);
        memcpy(p, s, n);
        memcpy(s, t, n);
        memcpy(t, p, n);
        free(p);
        i++;
    }
     if(n==sizeof(double)&&i==4)
    {
        double *p;
        p=(double*)malloc(n);
        memcpy(p, s, n);
        memcpy(s, t, n);
        memcpy(t, p, n);
        free(p);
    }
}


int main()
{
    int a, b;
    double x, y;
    char c, d;
    char s[1001], t[1001];

    gets(s);
    gets(t);
    swap_any(s, t, sizeof(s));
    printf("%s %s\n", s, t);

    c = getchar();
    getchar();
    d = getchar();
    getchar();
    swap_any(&c, &d, sizeof(char));
    printf("%c %c\n", c, d);

    scanf("%d %d", &a, &b);
    swap_any(&a, &b, sizeof(int));
    printf("%d %d\n", a, b);

    scanf("%lf %lf", &x, &y);
    swap_any(&x, &y, sizeof(double));
    printf("%lg %lg\n", x, y);
}

/**************************************************************
	Problem: 1208
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

