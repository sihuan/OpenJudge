#include <bits/stdc++.h>

using namespace std;
int  NumOfVechicles=0;
class  FlyThing
{
protected:
    string name;
    int x,y;
public:
    FlyThing(string a,int b,int c):name(a),x(b),y(c){}
    virtual void fly()=0;
    void show()
    {
        cout<<name<<" at "<<x<<" "<<y<<endl;
    }
};

class EnemyPlane : public FlyThing
{
public:
     EnemyPlane(string a,int b,int c):FlyThing(a,b,c){}
     void fly()
     {
         y++;
     }
//    void show()
//    {
//        cout<<name<<" at "<<x<<" "<<y<<endl;
//    }
};

class MyPlane : public FlyThing
{
public:
     MyPlane(string a,int b,int c):FlyThing(a,b,c){}
     void fly()
     {
         char aaa;
         cin>>aaa;
         if(aaa=='a') x--;
         if(aaa=='s') y++;
         if(aaa=='d') x++;
         if(aaa=='w') y--;
     }
//    void show()
//    {
//        cout<<name<<" at "<<x<<" "<<y<<endl;
//    }
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
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

