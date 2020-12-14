#include<iostream>
#include<iomanip>
using namespace std;
class Time
{
private:
    int x,y,z;
public:
    Time():x(0),y(0),z(0){}
    Time(int a,int b,int c):x(a),y(b),z(c){}
    Time(const Time &q):x(q.x),y(q.y),z(q.z){cout<<"There was a call to the copy constructor : "<<x<<","<<y<<","<<z<<endl;}
    Time &setTime(int a,int b,int c){x=a;y=b;z=c;return *this;}
    Time &setTime(const Time &q){x=q.x;y=q.y;z=q.z;return *this;}
    Time &getTime(){return *this;}
    void showTime(){cout<<setw(2)<<setfill('0')<<x<<":"<<setw(2)<<setfill('0')<<y<<":"<<setw(2)<<setfill('0')<<z<<endl;}
};

int main()
{
    cout<<"Copy constructor test output :"<<endl;
    Time t;
    Time tt(t);
    Time ttt(1, 2, 3);
    Time tttt(ttt.getTime());
    cout<<"\nTest data output :"<<endl;

    int cases;
    cin>>cases;
    for(int i = 1; i <= cases; ++i)
    {
        if(i % 2 == 0)
        {
            int hour, minute, second;
            cin>>hour>>minute>>second;
            t.setTime(hour, minute, second).showTime();
        }
        if(i % 2 == 1)
        {
            int hour, minute, second;
            cin>>hour>>minute>>second;
            Time tt(hour, minute, second);
            t.setTime(tt).showTime();
        }
    }
}

/**************************************************************
	Problem: 1388
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:2200 ms
	Memory:1268 kb
****************************************************************/

