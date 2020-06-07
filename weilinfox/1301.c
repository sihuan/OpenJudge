#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char ch[1005], c;
    int i, j, k;
    int f;

    while (gets(ch)!=NULL) {
        int flag=1;
        int num;

        /*Judge format*/

        for(i=0; i<strlen(ch); i++) {   /*不能有空格*/
        	if (isspace(ch[i])) {
        		flag=0;
        		break;
        	}
        }
    	for (i=0, j=0; j<strlen(ch); j++) { /*将点全部替换为空格*/
    		if (ch[j]=='.') {
        		ch[j]=' ';
        		i++;
    		}
    	}
        if (i!=3) { /*多于三个点不可*/
        	flag=0;
        }
        /*printf("%s\n", ch);*/

        for (i=0; i<strlen(ch); i++) {  /*转换点后还有别的符号不可*/
        	if (!isdigit(ch[i]) && !isspace(ch[i])) {
        		flag=0;
        		break;
        	}
        }

        f=num=0;
        for (i=0; i<strlen(ch); i++) {  /*格式转换后数字不是四个不可*/
        	if (isdigit(ch[i])) {
        		if (!f) {
        			num++;
        			f=1;
        		}
        	} else {
        		f=0;
        	}
        }
        /*printf("%d\n", num);*/
        if (num!=4) {
        	flag=0;
        }

        /*Judge num*/
        i=0;
        j=4;
        while (j-- && flag) {
        	num=0;
        	while (!isdigit(ch[i])) i++;
        	if (ch[i]=='0')
        		f=1;
        	else
        		f=0;

            int len=0; /*数字的位数，数字不能有前导零，不能出现00*/
        	for (  ; i<strlen(ch); i++) {
            	if (isdigit(ch[i])) {
                    len++;
                	num*=10;
                	num+=ch[i]-'0';
            	} else
                	break;
        	}
        	/*printf("%d\n", num);*/
        	if (num>255) {  /*数字不能大于255*/
        		flag=0;
        	} else if ((num>0 || len>1) && f) { /*判断前导零和00*/
        		flag=0;
        	}
        }

        if (flag)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}

/**************************************************************
	Problem: 1301
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

