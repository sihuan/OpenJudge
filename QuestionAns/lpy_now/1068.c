#include <stdio.h>
char a[11][6]= {"14041","03030","13121","13131","04130","12131","12141","13030","14141","14131"};
void prints(char c,int n)
{
    while(n--)putchar(c);
}
int main()
{
    int k=2;
    char s[20];
    int first=1;
    while(scanf("%d%s",&k,s)==2&&(k||s[0]!='0'))
    {
        if(!first)printf("\n");else first=0;
        for(int i=0; i<5; i++)
        {
            int t=1;
            for(int j=0; j<k; j++)
            {
                for(int n=0; s[n]!=0; n++)
                {
                    if(a[s[n]-'0'][i]=='1')
                    {
                        if(j)  t=0;
                        else
                        {
                            putchar(' ');
                            prints('-',k);
                            putchar(' ');
                                if(s[n+1]!=0)putchar(' ');
                        }
 
                    }
                    else if(a[s[n]-'0'][i]=='0')
                    {
                        if(j)  t=0;
                        else{
                            prints(' ',k+2);
                            if(s[n+1]!=0)putchar(' ');
                        }
                    }
                    else
                    {
                        if(a[s[n]-'0'][i]=='2')
                        {
                            putchar('|');
                            prints(' ',k+1);
                        }
                        else if(a[s[n]-'0'][i]=='3')
                        {
                            prints(' ',k+1);
                            putchar('|');
                        }
                        else if(a[s[n]-'0'][i]=='4')
                        {
                            putchar('|');
                            prints(' ',k);
                            putchar('|');
                        }
                        if(s[n+1]!=0)putchar(' ');
                    }
                }
                if(t)putchar('\n');
            }
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1068
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

