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
    Time(const Time &q):x(q.x),y(q.y),z(q.z){}//cout<<"There was a call to the copy constructor : "<<x<<","<<y<<","<<z<<endl;}
    int hour ()const{return x;}
    int minute()const{return y;}
    int second()const{return z;}
    void hour(int a){x=a;}
    void minute(int a){y=a;}
    void second(int a){z=a;}
    Time &setTime(int a,int b,int c){x=a;y=b;z=c;return *this;}
    Time &setTime(const Time &q){x=q.x;y=q.y;z=q.z;return *this;}
    const Time &getTime()const{return *this;}
     Time &inputTime()
     {
         int a,b,c;
         cin>>a>>b>>c;
         x=a;y=b;z=c;
         return *this;
     }
    void showTime()const{
        if(x<24&&x>=0&&y>=0&&y<60&&z>=0&&z<60)
        cout<<setw(2)<<setfill('0')<<x<<":"<<setw(2)<<setfill('0')<<y<<":"<<setw(2)<<setfill('0')<<z<<endl;
        else
            cout<<"Time error"<<endl;
        }
};


int main()
{
    cout<<"Constant test output :"<<endl;
    const Time c;
    const Time cc(1, 2, 3);
    const Time ccc(23, 60, 60);
    cout<<setw(2)<<setfill('0')<<c.hour()<<":";
    cout<<setw(2)<<setfill('0')<<c.minute()<<":";
    cout<<setw(2)<<setfill('0')<<c.second()<<endl;
    cc.getTime().showTime();
    ccc.showTime();

    cout<<"\nTest data output :"<<endl;
    Time t;
    int cases;
    cin>>cases;
    for(int i = 1; i <= cases; ++i)
    {
        if(i % 4 == 0)
        {
            int hour, minute, second;
            cin>>hour>>minute>>second;
            Time tt(hour, minute, second);
            tt.showTime();
        }
        if(i % 4 == 1)
        {
            int hour, minute, second;
            cin>>hour>>minute>>second;
            t.setTime(hour, minute, second).showTime();
        }
        if(i % 4 == 2)
            t.inputTime().showTime();
        if(i % 4 == 3)
        {
            int hour, minute, second;
            cin>>hour>>minute>>second;
            t.hour(hour);
            t.minute(minute);
            t.second(second);
            t.showTime();
        }
    }
}

/**************************************************************
	Problem: 1390
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:2216 ms
	Memory:1268 kb
****************************************************************/

