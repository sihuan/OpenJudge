#include<stdio.h>
#include<string.h>
int main()
{
    char key[21],test[21];
    int l_key,l_test;
    scanf("%s",key);
    l_key=strlen(key);
    int i=0;
    while(scanf("%s",test)!=EOF)
    {
        i++;
        if(i>5)
        {
            printf("Out of limited!\n");
            continue;
        }

        l_test=strlen(test);
        if(l_test==l_key)
        {
            int flag=1;
            for(int j=0;j<l_key;j++)
                if(test[j]!=key[j])
                {
                    printf("Wrong!\n");
                    flag=0;
                    break;
                }
            if(flag==1)
            {
                printf("Welcome!\n");
                return 0;
            }

        }
        else
            printf("Wrong!\n");
    }
}

/**************************************************************
	Problem: 1093
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

