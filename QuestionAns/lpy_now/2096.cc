#include<map>
#include<list>
#include<cmath>
#include<queue>
#include<stack>
#include<cstdio>
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

class Shape{
	public:
		virtual int area() = 0;
};
class Square : public Shape{
	private:
		int r;
	public:
		Square(int r_r){
			r = r_r;
		}
		int area(){
			return r * r;
		}
};
class Cube : public Shape{
	private:
		int r;
	public:
		Cube(int r_r){
			r = r_r;
		}
		int area(){
			return r * r * 6;
		}
};
class Rectangle : public Shape{
	private:
		int l, r;
	public:
		Rectangle(int l_l, int r_r){
			l = l_l, r = r_r;
		}
		int area(){
			return l * r;
		}
};
class Cuboid : public Shape{
	private:
		int l, r, h;
	public:
		Cuboid(int l_l, int r_r, int h_h){
			l = l_l, r = r_r, h = h_h;
		}
		int area(){
			return (l * r + l * h + r * h) * 2;
		}
};
int main()
{
    int n, l, w, h;
    cin >> n;
    Shape *sp[100];
    string name;
    for(int i = 0; i < n; i++)
    {
        cin >> name;
        if(name == "SQR")
        {
            cin >> l;
            sp[i] = new Square(l);
        }
        if(name == "RCT")
        {
            cin >> l >> w;
            sp[i] = new Rectangle(l, w);
        }
        if(name == "CUB")
        {
            cin >> l;
            sp[i] = new Cube(l);
        }
        if(name == "CBD")
        {
            cin >> l >> w >> h;
            sp[i] = new Cuboid(l, w, h);
        }
    }
    for(int i = 0; i < n; i++)
        cout << sp[i]->area() << endl;
    for(int i = 0; i < n; i++)
        delete sp[i];
}

/**************************************************************
	Problem: 2096
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

