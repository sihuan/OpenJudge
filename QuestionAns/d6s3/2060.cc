#include <iostream>
#include <string>
using namespace std;

class FlyThing {
protected:
    string name_;
    int x_, y_;

public:
    FlyThing(string n, int x, int y)
        : name_(n)
        , x_(x)
        , y_(y)
    {
    }
    virtual void fly() = 0;
    void show()
    {
        cout << name_ << " at " << x_ << " " << y_ << endl;
    }
};

class EnemyPlane : public FlyThing {
public:
    EnemyPlane(string n, int x, int y)
        : FlyThing(n, x, y)
    {
    }
    void fly()
    {
        y_++;
    }
};

class MyPlane : public FlyThing {
public:
    MyPlane(string n, int x, int y)
        : FlyThing(n, x, y)
    {
    }
    void fly()
    {
        char op;
        cin >> op;
        if (op == 'A' || op == 'a')
            x_--;
        else if (op == 'S' || op == 's')
            y_++;
        else if (op == 'W' || op == 'w')
            y_--;
        else if (op == 'D' || op == 'd')
            x_++;
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
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

