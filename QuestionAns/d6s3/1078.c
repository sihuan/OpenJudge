#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[21];
    char ans[21];
    int threshold;
} User;

void prsp(int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf(" ");
}

int main()
{
    User ul[101];
    int n, m, i, j, k, manm = 0, cnt, f;
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++) {
        scanf("%s", ul[i].name);
        if (strlen(ul[i].name) > manm)
            manm = strlen(ul[i].name);
        for (j = 0; j < m; j++) {
            scanf("%s", &(ul[i].ans[j]));
        }
        scanf("%d", &(ul[i].threshold));
    }
    for (i = 0; i < n; i++) {
        printf("%s", ul[i].name);
        prsp(manm - strlen(ul[i].name));
        printf(":");
        f = 0;
        for (j = 0; j < n; j++) {
            cnt = 0;
            for (k = 0; k < m; k++) {
                if (ul[i].ans[k] == ul[j].ans[k])
                    cnt++;
            }
            if (cnt >= ul[i].threshold && i != j) {
                if (f++)
                    printf(",%s", ul[j].name);
                else
                    printf("%s", ul[j].name);
            }
        }
        if (f == 0)
            printf("NONE!");
        printf("\n");
    }
}
/**************************************************************
	Problem: 1078
	User: 201901060610
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

