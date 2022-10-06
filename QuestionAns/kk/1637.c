#include <stdio.h>
#include <string.h>

int main()
{
    char s[101];
    int count;
    while(scanf("%s",s)!=EOF)
    {
        count=0;
        while(s[count]!='\0')
        {
            switch(s[count])
            {

            case '0':
                printf("0000");
                break;
            case '1':
                printf("0001");
                break;
            case '2':
                printf("0010");
                break;
            case '3':
                printf("0011");
                break;
            case '4':
                printf("0100");
                break;
            case '5':
                printf("0101");
                break;
            case '6':
                printf("0110");
                break;
            case '7':
                printf("0111");
                break;
            case '8':
                printf("1000");
                break;
            case '9':
                printf("1001");
                break;
            case 'a':
            case 'A':
                printf("1010");
                break;
            case 'b':
            case 'B':
                printf("1011");
                break;
            case 'c':
            case 'C':
                printf("1100");
                break;
            case'd':
                case 'D':
                printf("1101");
                break;
            case'e':
                case'E':
                        printf("1110");
                break;
            case'f':
                case 'F':
                printf("1111");
                break;
            }
            count++;
        }
            printf("\n");
    }
    return 0;
}
/**************************************************************
	Problem: 1637
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

