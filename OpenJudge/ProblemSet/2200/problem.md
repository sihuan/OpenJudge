# 汽车家族（II）
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description

目前，汽车的能源主要有油类燃料动力（包括汽油、柴油）、电动力两种。现在定义四个类：
1. Car类，包括静态整型数据成员cntOfCars，用于记录产生的汽车对象的个数。一个double型属性，表示汽车的速度。定义其构造函数，其中输出信息见样例。定义setSpeed(double)方法用于设置汽车的速度。
2.  OilCar类，是Car类的子类，包括静态整型数据成员cntOfOilCars，记录产生的燃油动力汽车对象的个数。一个double类型的属性，表示汽车百公里油耗。定义其构造函数，其中输出信息见样例。定义show()方法，用于输出如样例所示的信息。定义setOil(double)方法，用于设置汽车的油耗。
3.  ElecCar类，是Car类的子类，包括静态整型数据成员cntOfElecCars，记录产生的电动力汽车对象的个数。一个double类型的属性，表示汽车百公里能耗（以KW为单位）。定义其构造和析构函数，其中输出信息见样例。定义show()方法，用于输出如样例所示的信息。定义setPower(double)方法，用于设置汽车的能耗。
4. CarHall类，用于展示上述两类汽车。所以它应该是OilCar和ElecCar类的组合类，包含1个OilCar类的对象数组，1个ElecCar类的对象数组，每个数组的长度均为10。定义getInfo()方法，用于从标准输入中获取汽车的各种信息；定义showInfo()信息，按照样例的格式输出所有汽车的信息。


## Input
输入有多行。
第1行是一个正整数M，表示之后有M行输入，0<M<21。
之后的每行输入包括3部分：第1个是一个字符，之后是2个double类型的值。
如果第1个字符是'o'，则表示之后的两个值是一辆燃油动力汽车的速度和油耗。
如果第1个字符是'e'，则表示之后的两个值是一辆电动力汽车的速度和能耗。
其他字符则不是一辆合法的汽车。

## Output
见样例。

## Sample Input
```
5
o 100.4 12.13
e 100.3 120
f 200 1.3
o 200.14 22.34
e 80.1 234.4

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
The 5th oil-car is created.
The 8th car is created.
The 6th oil-car is created.
The 9th car is created.
The 7th oil-car is created.
The 10th car is created.
The 8th oil-car is created.
The 11th car is created.
The 9th oil-car is created.
The 12th car is created.
The 10th oil-car is created.
The 13th car is created.
The 11th oil-car is created.
The 14th car is created.
The 2th electrical car is created.
The 15th car is created.
The 3th electrical car is created.
The 16th car is created.
The 4th electrical car is created.
The 17th car is created.
The 5th electrical car is created.
The 18th car is created.
The 6th electrical car is created.
The 19th car is created.
The 7th electrical car is created.
The 20th car is created.
The 8th electrical car is created.
The 21th car is created.
The 9th electrical car is created.
The 22th car is created.
The 10th electrical car is created.
The 23th car is created.
The 11th electrical car is created.
We have 2 oil-cars, which are:
An oil-car at speed of 100.4km/s, with 12.13L/100km.
An oil-car at speed of 200.14km/s, with 22.34L/100km.
We have 2 electrical cars, which are:
An electrical car at speed of 100.3km/s, with 120KW/100km.
An electrical car at speed of 80.1km/s, with 234.4KW/100km.

```

## HINT


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
