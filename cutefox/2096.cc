#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include<typeinfo>
#include<cmath>
#include<math.h>
 
using namespace std;
 
class Shape{
 
public:
 
    virtual double area() = 0;
 
};
 
class Square:public Shape{
public:
    int b_;
    Square(int b):b_(b){
 
    }
    double area(){
        return b_*b_;
    }
 
};
class Rectangle:public Shape{
public:
    int b1_;
    int b2_;
    Rectangle(int b1,int b2):b1_(b1),b2_(b2){
 
    }
    double area(){
        return b1_*b2_;
    }
};
class Cube:public Shape{
public:
    int b_;
    Cube(int b):b_(b){
 
    }
    double area(){
        return b_*b_*6;
    }
 
 
};
class Cuboid:public Shape{
public:
    int b1_;
    int b2_;
    int b3_;
    Cuboid(int b1,int b2,int b3):b1_(b1),b2_(b2),b3_(b3){
 
    }
    double area(){
        return b1_*b2_*2 +b1_*b3_*2+b2_*b3_*2;
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
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

