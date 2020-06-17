#include <iostream>
using namespace std;

void Swap (double& a, double& b)
{
        double c = a;
        a = b;
        b = c;
}

void Swap (double* a, double* b)
{
        double c;
        c = *a;
        *a = *b;
        *b = c;
}
void Swap (int& a, int& b)
{
        int c = a;
        a = b;
        b = c;
}

void Swap (int* a, int* b)
{
        int c;
        c = *a;
        *a = *b;
        *b = c;
}

int main()
{
    int x1, y1;
     
    cin>>x1>>y1;
    Swap(&x1, &y1);
    cout<<x1<<" "<<y1<<endl;
     
    cin>>x1>>y1;
    Swap(x1, y1);
    cout<<x1<<" "<<y1<<endl;
 
    double x2, y2;
     
    cin>>x2>>y2;
    Swap(&x2, &y2);
    cout<<x2<<" "<<y2<<endl;
     
    cin>>x2>>y2;
    Swap(x2, y2);
    cout<<x2<<" "<<y2<<endl;
}
/**************************************************************
	Problem: 1107
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

