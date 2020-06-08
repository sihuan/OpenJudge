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
	Car(double _speed):speed(_speed)
	{
		cntOfCars++;
		cout<<"The "<<cntOfCars<<"th car is created."<<endl;
	}
	~Car()
	{
		cout<<"The "<<cntOfCars<<"th car is erased."<<endl;
		cntOfCars--;
	}
protected:
	static int cntOfCars;
	double speed; 
};
int Car::cntOfCars=0;
class OilCar:public Car
{
public:
	OilCar(double _speed,double _oil):Car(_speed),oil(_oil)
	{
		cntOfOilCars++;
		cout<<"The "<<cntOfOilCars<<"th oil-car is created."<<endl;
	}
	void show()
	{
		cout<<"An oil-car at speed of "<<speed<<"km/s, with "<<oil<<"L/100km."<<endl;
	}
	~OilCar()
	{
		cout<<"The "<<cntOfOilCars<<"th oil-car is erased."<<endl;
		cntOfOilCars--;
	}
private:
	static int cntOfOilCars;
	double oil;
};
int OilCar::cntOfOilCars=0;
class ElecCar:public Car
{
public:
	ElecCar(double _speed,double _energy):Car(_speed),energy(_energy)
	{
		cntOfElecCars++;
		cout<<"The "<<cntOfElecCars<<"th electrical car is created."<<endl;
	}
	void show()
	{
		cout<<"An electrical car at speed of "<<speed<<"km/s, with "<<energy<<"KW/100km."<<endl;
	}
	~ElecCar()
	{
		cout<<"The "<<cntOfElecCars<<"th electrical car is erased."<<endl;
		cntOfElecCars--;
	}
private:
	static int cntOfElecCars;
	double energy;
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
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

