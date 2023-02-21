#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mystrcmp(char *s,char *t){
	int slen = strlen(s);
	int tlen = strlen(t);
	if(slen==tlen)
		return strcmp(s,t);
	else
		return slen - tlen;
}

int main(){
	int N;
	scanf("%d",&N);
	char *a[50000],t[100001];
	int i,j,len;
	for(i = 0;i < N;++i){
		scanf("%s",t);
		//gets(t);
		//getchar();
		len = strlen(t);
		a[i] = (char *)malloc(sizeof(char)*(len+1));
		strcpy(a[i],t);
	}
	for(i = 0;i < N-1;++i){
		for(j = i + 1;j < N;++j){
			if(mystrcmp(a[i],a[j])>0){
				char *tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	for(i = 0;i < N;++i){
		printf("%s\n",a[i]);
		free(a[i]);
	}
	return 0;
}



/**************************************************************
	Problem: 1247
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:968 kb
****************************************************************/

