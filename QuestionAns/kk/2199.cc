#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>

using namespace std;

class Car
{
public:
    Car(double _speed)
    {
        cntOfCars++;
        speed=_speed;
        cout<< "The "<<cntOfCars<<"th car is created."<<endl;
    }
    ~Car()
    {

        cout<< "The "<<cntOfCars<<"th car is erased."<<endl;
        cntOfCars--;
    }
private:
    static int cntOfCars;
protected:
    double speed;
};
int Car::cntOfCars=0;

class OilCar:public Car
{
public:
    OilCar(double _speed,double _oil):Car(_speed)
    {
        cntOfOilCars++;
        oil=_oil;
        cout<<"The "<<cntOfOilCars<<"th oil-car is created."<<endl;
    }
    ~OilCar()
    {
        cout<<"The "<<cntOfOilCars<<"th oil-car is erased."<<endl;
        cntOfOilCars--;
    }
    void show()
    {
        cout<<"An oil-car at speed of "<<speed<<"km/s, with "<<oil<<"L/100km."<<endl;
    }
private:
    double oil;
    static int cntOfOilCars;
};
int OilCar::cntOfOilCars=0;

class ElecCar:public Car
{
public:
    ElecCar(double _speed,double _power):Car(_speed)
    {
        cntOfElecCars++;
        power=_power;
        cout<<"The "<<cntOfElecCars<<"th electrical car is created."<<endl;
    }
    ~ElecCar()
    {
        cout<<"The "<<cntOfElecCars<<"th electrical car is erased."<<endl;
        cntOfElecCars--;
    }
    void show()
    {
        cout <<"An electrical car at speed of "<<speed<<"km/s, with "<<power<<"KW/100km."<<endl;
    }
private:
    double power;
    static int cntOfElecCars;
};
int ElecCar::cntOfElecCars=0;
int main()
{
    double power, oil, speed;
    cin>>speed>>oil;
    OilCar one(speed, oil);
    one.show();
    cin>>speed>>power;
    ElecCar two(speed, power);
    two.show();
    return 0;
}
/**************************************************************
	Problem: 2199
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

