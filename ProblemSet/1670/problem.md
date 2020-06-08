# 农夫果园
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description

秋天到了，果园里的水果成熟了，商贩们来收水果了，农夫们都希望自己的水果能卖个好价钱。

现在果园里有三种水果正在销售，苹果（Apple）、香蕉（Banana）、梨（Pear）。每次销售都会记录下水果的种类、单价和总量，input()函数可以读取每条销售记录的单价和总量，total()函数可以计算出这次销售的总价。

但是，销售员在记录时忙中出错，各中水果的单价和总量的单位没有统一。单价是每公斤的价格，而水果是按箱记录的。其中，苹果一箱按30公斤计算，香蕉一箱按25公斤计算，梨一箱按20公斤计算。每种水果每次销售的总价是“单价*总量*每箱公斤数”。

现在，你来设计一个程序帮忙计算果园卖出水果的总价。由于total()函数对每种水果的计算方式都不一样，因此使用多态来实现。

-----------------------------------------------------------------------------

你设计并实现这个水果类的派生体系，使得main()函数能够运行并得到正确的输出。调用格式见append.cc



## Input
输入的第一个整数n，表示后面有n条水果收购的记录。每条记录分为3部分，水果种类、单价和总量。


## Output
输出为一行，表示整个果园卖出水果的总价。


## Sample Input
```
5
Apple 4.2 100
Banana 8.8 50
Apple 4.5 200
Banana 7.8 100
Pear 3.7 100
```
## Sample Output
```
Total Price : 77500

```

## HINT


## Append Code
### append.c
```c#include <stdio.h>
  
int mian()
{
    printf("请勿提交C语言代码");
}
```
### append.cc
```cppint main()
{
    Fruit* fruit;
    string fruit_name;
    double sum = 0.0;
    int cases;
    cin >> cases;
    for(int i = 1; i <= cases; i++)
    {
        cin >> fruit_name;
        if(fruit_name == "Apple")
            fruit = new Apple();
        if(fruit_name == "Banana")
            fruit = new Banana();
        if(fruit_name == "Pear")
            fruit = new Pear();
        fruit->input();
        sum += fruit->total();
        delete fruit;
    }
    cout << "Total Price : " << sum << endl;

     return 0;
}

```
