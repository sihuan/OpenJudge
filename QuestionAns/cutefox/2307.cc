#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;
class Cherry
{
public:
    double w;
    double n;
    static double sum;
    Cherry(double a,double b)
    {
        sum = a*b;
        w=a;
        n=b;
    }
    Cherry(){};
   double weight(){
       w=sum;
    return w;
    }
    void weight(double a){
        w=a;
    }
    void sold_weight(double b){
    sum=sum-b;
    }

};
double Cherry::sum=0;

int main()
{
    double weight, amount;
    cin >> weight >> amount;

    Cherry cherry(weight, amount);
    Cherry sold_cherry[100];

    int cases;
    cin >> cases;
    for(int i = 0; i < cases; i++)
    {
        double w;
        cin >> w;
        sold_cherry[i].weight(w);
        cherry.sold_weight(w);
    }
    cout << cherry.weight() << endl;
}

/**************************************************************
	Problem: 2307
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

