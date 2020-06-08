# Orange 
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
         Jackie开了一家水果店，店里新进了一些橙子（Orange）和橘子（Mandarin），现在需要把它们装箱（FruitBox），每箱有6个水果（橙子或橘子）。现在知道水果的单价（每公斤价格）和每个水果的重量（公斤数）。请你编写程序计算这箱水果的价格
用C++编写Orange类、Mandarin类和FruitBox来完成代码，调用格式见“Append Code”。
FruitBox::input()输入一箱水果的重量。
FruitBox::value()一箱水果的价格。
Orange、Mandarin和FruitBox的构造根据题意设计。


## Input
         第一行输入橙子的单价，第二行是6个橙子的重量。
第三行输入橘子的单价，第四行是6个橘子的重量。


## Output
         第一行输出这箱橙子的价格，第二行输出这箱橘子的价格。


## Sample Input
```
6.8
0.8 1.1 0.95 0.92 0.77 0.84
5.8
0.9 0.85 0.72 0.90 0.69 0.45

```
## Sample Output
```
36.584
26.158

```

## HINT


## Append Code
### append.c
```c
int main()
{
    double orange_price, mandarin_price;

    cin >> orange_price;
    FruitBox<Orange> orange(orange_price);
    orange.input();
    cout << orange.value() << endl;

    cin >> mandarin_price;
    FruitBox<Mandarin> mandarin(mandarin_price);
    mandarin.input();
    cout << mandarin.value() << endl;
}

```
### append.cc
```cpp
int main()
{
    double orange_price, mandarin_price;

    cin >> orange_price;
    FruitBox<Orange> orange(orange_price);
    orange.input();
    cout << orange.value() << endl;

    cin >> mandarin_price;
    FruitBox<Mandarin> mandarin(mandarin_price);
    mandarin.input();
    cout << mandarin.value() << endl;
}

```
