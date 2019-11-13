#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
//#include <fstream>

using namespace std;
//std::ifstream cin("input.txt");
//std::ofstream cout("output.txt");

class FlyThing{
public:
    FlyThing(string name,int x,int y) : name_(name),x_(x),y_(y){}
    virtual void fly() = 0;
    void show() const {cout<<name_<<" at "<<x_<<" "<<y_<<endl;}
protected:
    string name_;
    int x_;
    int y_;
};
class EnemyPlane : public FlyThing{
public:
    EnemyPlane(string name,int x,int y) : FlyThing(name,x,y){}
    void fly() {++y_;}
};
class MyPlane : public FlyThing{
public:
    MyPlane(string name,int x,int y) : FlyThing(name,x,y){}
    void fly() {
        char op;
        cin>>op;
        if(op == 'a' || op == 'A') --x_;
        else if(op == 's' || op == 'S') ++y_;
        else if(op == 'w' || op == 'W') --y_;
        else if(op == 'd' || op == 'D') ++x_;
    }
};
int main()
{
    FlyThing **planes;
    int numOfEnemplanes, i, x, y, numOfMoves, j;
    string str;
    cin>>numOfEnemplanes;
    planes = new FlyThing*[numOfEnemplanes + 1];
    planes[0] = new MyPlane("WUDI", 50, 50);
    for(i = 1; i <= numOfEnemplanes; i++)
    {
        cin>>str>>x>>y;
        planes[i] = new EnemyPlane(str, x, y);
    }

    for (j = 0; j < numOfEnemplanes + 1; j++)
    {
        planes[j]->show();
    }

    cin>>numOfMoves;
    for (i = 0; i < numOfMoves; i++)
    {
        for (j = 0; j < numOfEnemplanes + 1; j++)
        {
            planes[j]->fly();
            planes[j]->show();
        }
    }
    return 0;
}
/**************************************************************
	Problem: 2060
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

