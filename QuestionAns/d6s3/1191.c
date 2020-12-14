#include <stdio.h>
#include <string.h>

struct peo {
    char mz[31], qz[10];
};

void findwl(struct peo player[], char yqz[], char sqz[], int n)
{
    int i, j;
    char winner[300], loser[300];
    for (i = 0, j = 0; i < n; i++) {
        if (!strcmp(player[i].qz, yqz))
            if (j == 0) {
                printf("%s", player[i].mz);
                j++;
            } else
                printf(",%s", player[i].mz);
    }
    printf(" win ");
    for (i = 0, j = 0; i < n; i++) {
        if (!strcmp(player[i].qz, sqz))
            if (j == 0) {
                printf("%s", player[i].mz);
                j++;
            } else
                printf(",%s", player[i].mz);
    }
    puts(".");
}

int main()
{
    int m, n, i, issame, jz, bf, chui;
    char t[10];
    scanf("%d %d", &m, &n);
    struct peo player[n];
    for (i = 0; i < n; i++)
        scanf("%s", player[i].mz);
    while (m--) {
        issame = 1;
        jz = bf = chui = 0;
        if (n == 1)
            printf("%s win\n", player[0].mz);
        for (i = 0; i < n; i++) {
            scanf("%s", t);
            if (!strcmp(t, "Rock"))
                chui = 1;
            else if (!strcmp(t, "Paper"))
                bf = 1;
            else if (!strcmp(t, "Scissors"))
                jz = 1;
            strcpy(player[i].qz, t);
            if (i)
                if (strcmp(player[i].qz, player[i - 1].qz))
                    issame = 0;
        }
        if (issame) {
            puts("Tie.");
            continue;
        }
        if (jz && bf && chui) {
            puts("No winner, no loser.");
            continue;
        }
        if (jz && bf)
            findwl(player, "Scissors", "Paper", n);
        else if (chui && jz)
            findwl(player, "Rock", "Scissors", n);
        else if (bf && chui)
            findwl(player, "Paper", "Rock", n);
    }
}

/**************************************************************
	Problem: 1191
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

