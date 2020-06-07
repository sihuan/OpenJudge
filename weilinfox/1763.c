#include <stdio.h>

int main()
{
	int n;
	int tou, tui;
	int j, t;
	
	scanf("%d", &n);
	while (n--) {
		scanf("%d%d", &tou, &tui);
		j=tou;
		t=(tui-j*2)/2;
		j=tou-t;
		if (j*2+t*4==tui && j>=0 && t>=0) {
			printf("%d %d\n", j, t);
		} else {
			printf("no result\n");
		}
	}
	
	return 0;
}
/**************************************************************
	Problem: 1763
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

