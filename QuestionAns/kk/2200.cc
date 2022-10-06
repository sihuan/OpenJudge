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
        char c;
        double info1,info2;
        int cases;
        cin>>cases;
        for(int i=0;i<cases;i++)
        {
            cin>>c>>info1>>info2;
            if(c=='o')
            {
                oilcars[i_oil].setsSpeed(info1);
                oilcars[i_oil].SetOil(info2);
                i_oil++;

            }
            else if(c=='e')
            {
                eleccars[i_elec].setsSpeed(info1);
                eleccars[i_elec].setPower(info2);
                i_elec++;
            }
        }
    }
    void showInfo()
    {
        cout<<"We have "<<i_oil<<" oil-cars, which are:"<<endl;
        for(int i=0;i<i_oil;i++)
        {
            oilcars[i].show();
        }
        cout <<"We have "<<i_elec<<" electrical cars, which are:"<<endl;
        for(int i=0;i<i_elec;i++)
        {
            eleccars[i].show();
        }


    }
private:
    OilCar oilcars[10];
    ElecCar eleccars[10];
    static int i_elec;
    static int i_oil;
};
int CarHall::i_elec=0;
int CarHall::i_oil=0;

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
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

