#include<stdio.h>
void run(int x,int y,int z)
{
    int a[14],day;
    a[1]=31;
    a[3]=31;
    a[5]=31;
    a[7]=31;
    a[8]=31;
    a[10]=31;
    a[12]=31;
    a[4]=30;
    a[6]=30;
    a[9]=30;
    a[11]=30;

    if(((x%4==0)&&(x%100!=0))||(x%400==0))
        a[2]=29;
    else a[2]=28;
    if((z>a[y])||y>12)
        printf("error date!\n");
    else
    {
        day=0;
        for(int i=1;i<y;i++)
            day+=a[i];
        day+=z;
        printf("%d\n",day);
    }

}
int main()
{
    int m,x,y,z,i=1;
    scanf("%d",&m);
    while(i<=m)
    {
        scanf("%d-%d-%d",&x,&y,&z);
        run(x,y,z);
        i++;
    }
}
/**************************************************************
	Problem: 1101
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

