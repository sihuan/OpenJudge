# 水果店
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
小明经营着一个不大的水果店（似曾相识哦~），只销售苹果、香蕉和桔子。为了促销，小明制定了如下定价策略：
1. 苹果：按斤论价，每斤P元，买W斤，则需支付W*P元。
2. 香蕉：半价，每斤P元，买W斤，则需支付W/2*P元。
3.桔子：按斤论价，每斤P元，买W斤。如果W>10，则打半价，即需支付W*P/2元；否则如果W>5，则打八折，即需支付W*P*0.8元；其他情况不打折，即需支付W*P元。
请用C++来计算某个顾客采购的水果的总价。该程序至少应有：
1. Fruit类：是个抽象类，是Apple、Banana和Orange的父类。支持重载的加法运算。
2. Apple、Banana和Orange类：分别对应于苹果、香蕉和桔子三种水果，每种水果执行不同的定价策略。


## Input
输入为多行，每行格式为：
C W P
其中C是水果类型（a、b、o分别代表苹果、香蕉和桔子），W和P分别是顾客购买的相应水果的重量和每斤水果的单价。


## Output
输出顾客需支付的总金额。


## Sample Input
```
a 1 1
b 1 1
o 1 1

```
## Sample Output
```
2.5

```

## HINT
注意包含vector容器的头文件。
需要用多态来实现。


## Append Code
### append.cc
```cppint main()
{
    vector<Fruit*> fruits;
    vector<Fruit*>::iterator itr;
    char type;
    double weight, price, totalPrice;
    while (cin>>type>>weight>>price)
    {
        switch(type)
        {
        case 'a':
            fruits.push_back(new Apple(weight, price));
            break;
        case 'b':
            fruits.push_back(new Banana(weight,price));
            break;
        case 'o':
            fruits.push_back(new Orange(weight, price));
            break;
        }
    }
    totalPrice = 0;
    for (itr = fruits.begin(); itr != fruits.end(); itr++)
    {
        totalPrice = **itr + totalPrice;
    }
    cout<<totalPrice<<endl;
    return 0;
}
```
