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
using namespace std;

class CPLX{
	private:
		double x, y;
	public:
		CPLX(double x_x, double y_y){
			x = x_x, y = y_y;
			cout << "CREATE(): " << x << " " << y << "\n";
		}
		~CPLX(){
			cout << "RELEASE(): " << x << " " << y << "\n";
		}
		void print(){
			cout << "PRINT(): (" << x << ", " << y << "i)" << "\n";
		}
};


int main()
{
    int cases;
    cin >> cases;
    for(int i = 1; i <= cases; ++i)
    {
        double a, b;
        cin >> a >> b;
        cout << "=========================" << endl;

        CPLX cplx(a, b);
        cplx.print();
    }
    cout << "=========================" << endl;
}
/**************************************************************
	Problem: 1661
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

