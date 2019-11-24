#include<stdio.h>
int main()
{
    int a,b;
    while(1)
    {
        scanf("%d",&a);
        if(a!=0)
        {
           b=a%10;
            switch(b)
            {
                case 1:printf("%dst\n",a);break;
                case 2:printf("%dnd\n",a);break;
                case 3:printf("%drd\n",a);break;
                default:printf("%dth\n",a);
            }
        }
        else
            break;

    }



    return 0;
}

/**************************************************************
	Problem: 1098
	User: 201801020908
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

