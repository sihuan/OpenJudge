#include <stdio.h>
#include <string.h>
#define int_f 0x7FFFFFFF
int main()
{
    int i=0;
    char a[1500]={0};
    char min[1500]={0};
    char max[1500]={0};
    char temp[1500]={0};
    int flag=0;
    while(scanf("%s",&a)!=EOF)
    {
        int l=strlen(a);
        int m=0;
        for(i=0;i<l;++i)
        {
            if(a[i]=='0') ++m;
            else break;
        }
        if(m==l) m=m-1;
        int x=0;
        for(i=m;i<l;++i)
        {
            temp[x]=a[i];
            temp[x+1] = '\0';
            x++;
        }
        if(flag==0)
        {
            strcpy(min,temp);
            strcpy(max,temp);
            flag=1;
            continue;
        }
        //printf("%d\n",l-m);
         //  printf("%s %s\n",temp,min);
         //printf("%d",strlen(temp));
         int ltemp=strlen(temp);
         int lmax=strlen(max);
         int lmin=strlen(min);
         if(lmax<ltemp) strcpy(max,temp);
         if(lmin>ltemp) strcpy(min,temp);
         if(lmax==ltemp)
        {
                for(i=0;i<l-m;++i)
            {
                if(temp[i]>max[i])
                {
                    strcpy(max,temp);
                    break;
                }
                else if(temp[i]==max[i])
                {
                    continue;
                }
                else break;
            }
        }
        if(lmin==ltemp)
        {
             for(i=0;i<l-m;++i)
            {
                if(temp[i]<min[i])
                {
                    strcpy(min,temp);
                    break;
                }
                else if(temp[i]==min[i])
                {
                    continue;
                }
                else break;
            }
        }

    }
    printf("The maximum value is : %s\n",max);
    printf("The minimum value is : %s\n",min);
}

/**************************************************************
	Problem: 1060
	User: 201601160202
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

