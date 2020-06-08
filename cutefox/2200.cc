#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
class Car
{
public:
    Car(double _speed=0):speed(_speed)
    {
        cntOfCars++;
        cout<<"The "<<cntOfCars<<"th car is created."<<endl;
    }
    void setSpeed(double _speed)
    {
        speed=_speed;
         
    }
    ~Car()
    {
        cntOfCars--;
    }
protected:
    static int cntOfCars;
    double speed; 
};
int Car::cntOfCars=0;
class OilCar:public Car
{
    friend class CarHall;
public:
    OilCar(double _speed=0,double _oil=0):Car(_speed),oil(_oil)
    {
        cntOfOilCars++;
        cout<<"The "<<cntOfOilCars<<"th oil-car is created."<<endl;
    }
    void setOil(double _speed,double _oil)
    {
        setSpeed(_speed);
        oil=_oil;
    }
    void show()
    {
        cout<<"An oil-car at speed of "<<speed<<"km/s, with "<<oil<<"L/100km."<<endl;
    }
    ~OilCar()
    {
        cntOfOilCars--;
    }
private:
    static int cntOfOilCars;
    double oil;
};
int OilCar::cntOfOilCars=0;
class ElecCar:public Car
{
    friend class CarHall;
public:
    ElecCar(double _speed=0,double _energy=0):Car(_speed),energy(_energy)
    {
        cntOfElecCars++;
        cout<<"The "<<cntOfElecCars<<"th electrical car is created."<<endl;
    }
    void setPower(double _speed,double _energy)
    {
        setSpeed(_speed);
        energy=_energy;
    }
    void show()
    {
        cout<<"An electrical car at speed of "<<speed<<"km/s, with "<<energy<<"KW/100km."<<endl;
    }
    ~ElecCar()
    {
        cntOfElecCars--;
    }
private:
    static int cntOfElecCars;
    double energy;
};
int ElecCar::cntOfElecCars=0;
class CarHall
{
public:
    void getInfo()
    {
        int m;
        cin>>m;
        for(int i=0;i<m;++i)
        {
            char c;
            double _speed,tmp;
            cin>>c>>_speed>>tmp;
            if(c=='o')
            {
                oilcar[oil++].setOil(_speed,tmp);
            }
            if(c=='e')
            {
                eleccar[ele++].setPower(_speed,tmp);
            }
        }
    }
    void showInfo()
    {
        cout<<"We have "<<oil<<" oil-cars, which are:"<<endl;
        for(int i=0;i<oil;i++)
           cout<<"An oil-car at speed of "<<oilcar[i].speed<<"km/s, with "<<oilcar[i].oil<<"L/100km."<<endl;
        cout<<"We have "<<ele<<" electrical cars, which are:"<<endl;
        for(int i=0;i<ele;i++)
            cout<<"An electrical car at speed of "<<eleccar[i].speed<<"km/s, with "<<eleccar[i].energy<<"KW/100km."<<endl;
    }
private:
    OilCar oilcar[10];
    ElecCar eleccar[10];
    static int oil,ele;
};
int CarHall::oil=0;
int CarHall::ele=0;
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
	Problem: 2200
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

