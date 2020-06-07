# Mandarin
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
         Jackie开了一家水果店，店里新进了一些橘子（Mandarin），现在需要把它们装箱（MandarinBox），每箱有6个橘子。现在知道橘子的单价（每公斤价格）和每个橘子的重量（公斤数）。请你编写程序计算这箱橘子的价格。
用C++编写Mandarin类和MandarinBox来完成代码，调用格式见“Append Code”。
Manadarin::weight(double)修改橘子的重量。
MandarinBox::value()一箱橘子的价格。
ManadarinBox重载下标运算符，取出下标对应的橘子。
ManadarinBox构造，初始化橘子的单价。


## Input
         第一行输入橘子的单价，第二行是6个橘子的重量。


## Output
       输出这箱橘子的价格。


## Sample Input
```
5.8
0.8 1.1 0.95 0.92 0.77 0.84

```
## Sample Output
```
31.204
```

## HINT


## Append Code
### append.c
```c
int main()
{
    double price, w;

    cin >> price;
    MandarinBox mandarin(price);
    for(int i = 0; i < 6; i++)
    {
        cin >> w;
        mandarin[i].weight(w);
    }
    cout << mandarin.value() << endl;
}

```
### append.cc
```cpp
int main()
{
    double price, w;

    cin >> price;
    MandarinBox mandarin(price);
    for(int i = 0; i < 6; i++)
    {
        cin >> w;
        mandarin[i].weight(w);
    }
    cout << mandarin.value() << endl;
}

```
