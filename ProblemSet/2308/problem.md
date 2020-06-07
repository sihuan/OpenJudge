# Grape
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
         Jackie开了一家水果店，店里昨日剩余m公斤葡萄（Grape）,今天新进了n公斤，葡萄的属性是重量（weight）。葡萄的每公斤单价是price。请你编写程序计算葡萄的总重量和总价格。
用C++编写Grape类来完成代码，调用格式见“Append Code”。
Grape::weight()葡萄的重量。
Grape::weight(double)修改葡萄的重量。
Grape::value()葡萄的价格。
Grape的构造根据题意设计。


## Input
         先输入葡萄的单价price，然后分别输入昨天剩余和今天新进的葡萄重量。


## Output
 输出葡萄的总重量和总价格。

## Sample Input
```
22.5
11
22

```
## Sample Output
```
33
742.5

```

## HINT


## Append Code
### append.c
```c
int main()
{
    double w, price;
    cin >> price;
    cin >> w;
    const Grape grap(price, w);
    Grape grape(price);
    cin >> w;
    grape.weight(w);
    cout << grape.weight() + grap.weight() << endl;
    cout << grape.value() + grap.value() << endl;
}

```
### append.cc
```cpp
int main()
{
    double w, price;
    cin >> price;
    cin >> w;
    const Grape grap(price, w);
    Grape grape(price);
    cin >> w;
    grape.weight(w);
    cout << grape.weight() + grap.weight() << endl;
    cout << grape.value() + grap.value() << endl;
}

```
