#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

class Equation
{
public:
    void setArgs(int _a[], int _n)
    {
        a=_a;
        n=_n;
    }
    void print()
    {
        int flag=0;
        for(int i=0;i<=n;i++)
        {
            if(a[i]!=0)
                flag++;
        }
        if(flag==0)
        {
            printf("0\n");
            return;
        }
        if(flag==1&&a[n]!=0)
        {
            printf("%d\n",a[n]);
            return;
        }
        for(int i=0;n-i>1;i++)
        {
            if(a[i]!=0)
            {
                if(a[i]==1)
                    printf("x^%d",n-i);
                else
                    printf("%dx^%d",a[i],n-i);
                flag--;
                if(flag)
                    printf("+");
            }
        }
        if(a[n-1]!=0)
        {
            if(a[n-1]==1)
                printf("x");
            else
                printf("%dx",a[n-1]);
            flag--;
            if(flag)
                printf("+");
        }
        if(flag)
            printf("%d",a[n]);
        printf("\n");
    }
    double getValue(double x)
    {
        double sum;
        sum=a[0];
        for(int i=1;i<=n;i++)
        {
            sum=sum*x+a[i];
        }
        return sum;
    }
private:
    int *a;
    int n;
};
int main()
{
    int i, j, n, m, *a;
    double x;
    cin>>n;
    for (i = 0; i < n; i++)
    {
        Equation eq;
        cin>>m;
        a = new int[m + 1];
        for (j = 0; j <= m; j++)
            cin>>a[j];
        eq.setArgs(a, m);
        eq.print();
        cin>>x;
        cout<<eq.getValue(x)<<endl;
        delete []a;
    }
    return 0;
}
/**************************************************************
	Problem: 2198
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

