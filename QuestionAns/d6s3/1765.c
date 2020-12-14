#include <stdio.h>
#include <string.h>

int main()
{
    int i, t, j, k, h, a;
    char ar[50];
    char arp[50];
    scanf("%d", &t);
    for (i = 0; i < t; i++) {
        if (i != 0)
            printf("\n");
        a = 0;
        memset(arp, 0, sizeof arp);
        scanf("%s", ar);
        if (!strcmp(ar, "0"))
            printf("0");
        if (ar[a] == '0')
            for (a = 0; a < strlen(ar); a++)
                if (ar[a] == '0' && ar[a + 1] != '0') {
                    a++;
                    break;
                }
        for (j = strlen(ar) - 1, k = 0, h = 0; j >= a; j--, k++, h++) {
            if (ar[j] == 'a')
                break;
            if (k != 0 && k % 3 == 0) {
                arp[h] = ',';
                h++;
            }
            arp[h] = ar[j];
        }
        for (j = h-1; j >= 0; j--) {
            printf("%c", arp[j]);
        }
    }
}
/**************************************************************
	Problem: 1765
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

