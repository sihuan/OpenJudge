#include<map>
#include<list>
#include<cmath>
#include<queue>
#include<stack>

#include<vector>
#include<iomanip>
#include<cstring>
#include<iterator>
#include<iostream>
#include<algorithm>
#define R register
#define LL long long
#define pi 3.141
#define INF 1400000000
using namespace std;

class Cherry{
	private:
		double w, amount, total_weight, sold;
	public:
		Cherry(double a, double b){
			w = a, amount = b;
			total_weight = w * amount;
		}
		Cherry(){
			
		}
		void weight(double a){
			w = a;
		}
		void sold_weight(double a){
			total_weight -= a;
		}
		double weight(){
			return total_weight;
		}
};

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
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

