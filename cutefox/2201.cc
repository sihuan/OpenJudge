#include<bits/stdc++.h>
using namespace std;
class Car
{
protected:
    static int cntofcars;
    double v;
public:
    Car(){cout<<"The "<<cntofcars++<<"th car is created."<<endl;}
    void setSpeed(double v1){v=v1;}
};
class OilCar:public Car
{
private:
    static int cntofcarss;
    double o;
public:
    OilCar(){cout<<"The "<<cntofcarss++<<"th oil-car is created."<<endl;}
    void show(){cout<<"An oil-car at speed of "<<v<<"km/s, with "<<o<<"L/100km."<<endl;}
    void setOil(double oo){o=oo;}
};
class ElecCar:public Car
{
private:
    static int cntofcarsss;
    double e;
public:
    ElecCar(){cout<<"The "<<cntofcarsss++<<"th electrical car is created."<<endl;}
    void show(){cout<<"An electrical car at speed of "<<v<<"km/s, with "<<e<<"KW/100km."<<endl;}
    void setEle(double oo){e=oo;}
};
class CarHall
{
private:
    OilCar *a;
    ElecCar *b;
    int h,l;
public:
    ~CarHall(){delete []a;delete []b;}
    void getInfo()
    {
        double y,yy,yyy,yyyy;
        cin>>h;
        a=new OilCar[h];
        for(int i=0;i<h;i++)
        {
            cin>>y>>yy;
            a[i].setSpeed(y);
            a[i].setOil(yy);
        }
        cin>>l;
        b=new ElecCar[l];
        for(int i=0;i<l;i++)
        {
            cin>>yyy>>yyyy;
            b[i].setSpeed(yyy);
            b[i].setEle(yyyy);
        }
    }
    void showInfo()
    {
        int i=0,j=0;
        cout<<"We have "<<h<<" oil-cars, which are:"<<endl;
        while(i!=h){a[i++].show();}
        cout<<"We have "<<l<<" electrical cars, which are:"<<endl;
        while(j!=l){b[j++].show();}
    }
};
int Car::cntofcars=1;
int OilCar::cntofcarss=1;
int ElecCar::cntofcarsss=1;


int main()
{
    Car car;
    OilCar oilcar;
    ElecCar eleccar;
    CarHall carhall;
    carhall.getInfo();
    carhall.showInfo();
    return 0;
}
/**************************************************************
	Problem: 2201
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

