#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>

using namespace std;

class Car
{
public:
    Car()
    {
        cntOfCars++;
        cout<< "The "<<cntOfCars<<"th car is created."<<endl;
    }
    Car(double _speed)
    {
        cntOfCars++;
        speed=_speed;
        cout<< "The "<<cntOfCars<<"th car is created."<<endl;
    }
    void setsSpeed(double _speed)
    {
        speed = _speed;
    }
//    ~Car()
//    {
//
//        cout<< "The "<<cntOfCars<<"th car is erased."<<endl;
//        cntOfCars--;
//    }
private:
    static int cntOfCars;
protected:
    double speed;
};
int Car::cntOfCars=0;

class OilCar:public Car
{
public:
    OilCar():Car()
    {
        cntOfOilCars++;
        cout<<"The "<<cntOfOilCars<<"th oil-car is created."<<endl;
    }
    OilCar(double _speed,double _oil):Car(_speed)
    {
        cntOfOilCars++;
        oil=_oil;
        cout<<"The "<<cntOfOilCars<<"th oil-car is created."<<endl;
    }
//    ~OilCar()
//    {
//        cout<<"The "<<cntOfOilCars<<"th oil-car is erased."<<endl;
//        cntOfOilCars--;
//    }
    void SetOil(double _oil)
    {
        oil=_oil;
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
    ElecCar():Car()
    {
        cntOfElecCars++;
        cout<<"The "<<cntOfElecCars<<"th electrical car is created."<<endl;
    }
    ElecCar(double _speed,double _power):Car(_speed)
    {
        cntOfElecCars++;
        power=_power;
        cout<<"The "<<cntOfElecCars<<"th electrical car is created."<<endl;
    }
//    ~ElecCar()
//    {
//        cout<<"The "<<cntOfElecCars<<"th electrical car is erased."<<endl;
//        cntOfElecCars--;
//    }
    void setPower(double _power)
    {
        power=_power;
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

class CarHall
{
public:
    CarHall(){}
    void getInfo()
    {
        double info1,info2;
        cin >> numOil;
        oilcars= new OilCar [numOil];
        for(int i=0;i<numOil;i++)
        {
            cin>>info1>>info2;
            oilcars[i].setsSpeed(info1);
            oilcars[i].SetOil(info2);
        }
        cin >> numElec;
        eleccars = new ElecCar [numElec];
        for(int i=0;i<numElec;i++)
        {
            cin>>info1>>info2;
            eleccars[i].setsSpeed(info1);
            eleccars[i].setPower(info2);
        }
    }
    void showInfo()
    {
        cout<<"We have "<<numOil<<" oil-cars, which are:"<<endl;
        for(int i=0;i<numOil;i++)
        {
            oilcars[i].show();
        }
        cout <<"We have "<<numElec<<" electrical cars, which are:"<<endl;
        for(int i=0;i<numElec;i++)
        {
            eleccars[i].show();
        }
    }
private:
    OilCar *oilcars;
    ElecCar *eleccars;
    int numOil;
    int numElec;
};
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
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

