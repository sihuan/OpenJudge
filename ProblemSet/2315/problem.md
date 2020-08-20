# Strawberry 
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
         Jackie开了一家水果店，最近草莓（Strawberry）非常受欢迎。草莓是一种浆果类（Berry）水果，因此店里又新进了另两种浆果类的水果：蓝莓（Blueberry）和桑椹（Mulberry）。现在有三种水果的进货数据，请你编写程序计算水果价格。
用C++编写Berry类、Mulberry类、Strawberry类、Blueberry类来完成代码，其中Berry类有属性重量（weight）和单价（price），并排生了另外三个类，调用格式见“Append Code”。
Berry::print()、Strawberry::print()、Blueberry::print()、Mulberry::print()输出水果的重量和总价格信息。
各类的构造根据给出的调用代码完成。


## Input
         第一行输入整数k，表示后面有k个记录。每个记录水果的名称标记、重量和单价。


## Output
        输出这些水果的构造和析构过程，重量和总价格信息。详细情况见样例。


## Sample Input
```
3
S 15 10
M 25 5
B 50 2

```
## Sample Output
```
Construct berry!
Construct strawberry!
Berry : 10kg
Strawberry : 10kg, 150.
Destruct strawberry!
Destruct berry!

Construct berry!
Construct mulberry!
Berry : 5kg
Mulberry : 5kg, 125.
Destruct mulberry!
Destruct berry!

Construct berry!
Construct blueberry!
Berry : 2kg
Blueberry : 2kg, 100.
Destruct blueberry!
Destruct berry!


```

## HINT


## Append Code
### append.c
```c
int main()
{
    int cases;
    cin >> cases;
    while(cases--)
    {
        string lb;
        double price, weight;
        cin >> lb >> price >> weight;
        if(lb == "S")
        {
            Strawberry straw(price, weight);
            straw.Berry::print();
            straw.print();
        }
        if(lb == "M")
        {
            Mulberry mul(price, weight);
            mul.Berry::print();
            mul.print();
        }
        if(lb =="B")
        {
            Blueberry blue(price, weight);
            blue.Berry::print();
            blue.print();
        }
        cout << endl;
    }
}

```
### append.cc
```cpp
int main()
{
    int cases;
    cin >> cases;
    while(cases--)
    {
        string lb;
        double price, weight;
        cin >> lb >> price >> weight;
        if(lb == "S")
        {
            Strawberry straw(price, weight);
            straw.Berry::print();
            straw.print();
        }
        if(lb == "M")
        {
            Mulberry mul(price, weight);
            mul.Berry::print();
            mul.print();
        }
        if(lb =="B")
        {
            Blueberry blue(price, weight);
            blue.Berry::print();
            blue.print();
        }
        cout << endl;
    }
}

```
