#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int extract(char inp[])
{
    int i=0,len;
    len=strlen(inp);
    while(inp[i]==48&&i<len-1)
        i++;
    strcpy(inp,inp+i);
    return strlen(inp);
}
int comp_max(char inp[],char store_max[],int len,int lenr)
{
    if(len>lenr||(len==lenr&&strcmp(inp,store_max)>0))
        {
            strcpy(store_max,inp);
            return len;
        }
        return lenr;
}
int comp_min(char inp[],char store_min[],int len,int lenr)
{
    if(len<lenr||(len==lenr&&strcmp(inp,store_min)<0))
    {
        strcpy(store_min,inp);
        return len;
    }
    return lenr;

}

int main()
{
    char inp[1003],store_max[1003],store_min[1003];
    int len,lenr_max=0,lenr_min=1001;
    while(scanf("%s",inp)!=EOF)
    {
        len=extract(inp);
        lenr_max=comp_max(inp,store_max,len,lenr_max);
        lenr_min=comp_min(inp,store_min,len,lenr_min);

    }
    printf("The maximum value is : %s\n",store_max);
    printf("The minimum value is : %s\n",store_min);
}


/**************************************************************
	Problem: 1060
	User: 202001060117
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

