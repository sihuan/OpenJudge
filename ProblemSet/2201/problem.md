# 汽车家族（III）
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description


目前，汽车的能源主要有油类燃料动力（包括汽油、柴油）、电动力两种。现在定义四个类：
1. Car类，包括静态整型数据成员cntOfCars，用于记录产生的汽车对象的个数。一个double型属性，表示汽车的速度。定义其构造函数，其中输出信息见样例。定义setSpeed(double)方法用于设置汽车的速度。
2.   OilCar类，是Car类的子类，包括静态整型数据成员cntOfOilCars，记录产生的燃油动力汽车对象的个数。一个double类型的属性，表示汽车百公里油耗。定义其构造函数，其中输出信息见样例。定义show()方法，用于输出如样例所示的信息。定义setOil(double)方法，用于设置汽车的油耗。
3.   ElecCar类，是Car类的子类，包括静态整型数据成员cntOfElecCars，记录产生的电动力汽车对象的个数。一个double类型的属性，表示汽车百公里能耗（以KW为单位）。定义其构造和析构函数，其中输出信息见样例。定义show()方法，用于输出如样例所示的信息。定义setPower(double)方法，用于设置汽车的能耗。
4.  CarHall类，用于展示上述两类汽车。所以它应该是OilCar和ElecCar类的组合类，包含1个OilCar类的对象指着，1个ElecCar类的对象指针。定义getInfo()方法，用于从标准输入中获取汽车的各种信息；定义showInfo()信息，按照样例的格式输出所有汽车的信息。



## Input
输入有多行。
第1行M是一个正整数，表示之后有M辆燃油动力汽车的数据。之后的M行，每行包括2个double类型的值，分别是一辆燃油动力汽车的速度和油耗。
紧接着又是一个正整数N，表示之后有N辆电动力汽车的数据。之后的N行，每行包括2个double类型的值，分别是一辆燃油动力汽车的速度和能耗。


## Output
见样例。

## Sample Input
```
3
100 8.44
120 9.22
90.87 10.23
4
120.1 878
90.87 13.4
78.12 249.5
99.87 135.1

```
## Sample Output
```
The 1th car is created.
The 2th car is created.
The 1th oil-car is created.
The 3th car is created.
The 1th electrical car is created.
The 4th car is created.
The 2th oil-car is created.
The 5th car is created.
The 3th oil-car is created.
The 6th car is created.
The 4th oil-car is created.
The 7th car is created.
The 2th electrical car is created.
The 8th car is created.
The 3th electrical car is created.
The 9th car is created.
The 4th electrical car is created.
The 10th car is created.
The 5th electrical car is created.
We have 3 oil-cars, which are:
An oil-car at speed of 100km/s, with 8.44L/100km.
An oil-car at speed of 120km/s, with 9.22L/100km.
An oil-car at speed of 90.87km/s, with 10.23L/100km.
We have 4 electrical cars, which are:
An electrical car at speed of 120.1km/s, with 878KW/100km.
An electrical car at speed of 90.87km/s, with 13.4KW/100km.
An electrical car at speed of 78.12km/s, with 249.5KW/100km.
An electrical car at speed of 99.87km/s, with 135.1KW/100km.

```

## HINT
由于事先不知道有多少辆车，所以CarHall中的两种汽车成员必须是指针，然后在getInfo()中，在读取到相应的汽车辆数之后，再用new运算符申请空间。

## Append Code
### append.cc
```cppint main()
{
    Car car;
    OilCar oilcar;
    ElecCar eleccar;
    CarHall carhall;
    carhall.getInfo();
    carhall.showInfo();
    return 0;
}
```
