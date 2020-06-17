# Pineapple 
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
         Jackie开了一家水果店，菠萝（Pineapple）的销售方式有三种。第一种是削好的菠萝按块卖，每块4.5元；第二种是一个菠萝称重卖，每斤9.8元；第三种是两个以上菠萝称重卖，每斤价格可以协商。请你编写程序计算销售菠萝的价格。
用C++编写pineapple()函数来完成代码，调用格式见“Append Code”。


## Input
         输入为多组。每组首先输入销售类型，为1是第一种销售方式，后跟一个整数amount是销售菠萝的块数；为2是第二种销售方式，后跟一个实数weight是菠萝的重量；为3是第三种销售方式，后跟两个实数weight和price，分别表示菠萝的重量和单价。


## Output
         每行输出销售菠萝的价格。


## Sample Input
```
1 5
2 4
3 5 9.5

```
## Sample Output
```
22.5
39.2
47.5

```

## HINT


## Append Code
### append.c
```c
int main()
{
    double weight, price;
    int amount;
    int cases = 3, type;
    while(cases--)
    {
        cin >> type;
        switch(type)
        {
        case 1 :
            cin >> amount;
            cout << pineapple(amount) << endl;
            break;
        case 2 :
            cin >> weight;
            cout << pineapple(weight) << endl;
            break;
        case 3 :
            cin >> weight >> price;
            cout << pineapple(weight, price) << endl;
            break;
        }
    }
}

```
### append.cc
```cpp
int main()
{
    double weight, price;
    int amount;
    int cases = 3, type;
    while(cases--)
    {
        cin >> type;
        switch(type)
        {
        case 1 :
            cin >> amount;
            cout << pineapple(amount) << endl;
            break;
        case 2 :
            cin >> weight;
            cout << pineapple(weight) << endl;
            break;
        case 3 :
            cin >> weight >> price;
            cout << pineapple(weight, price) << endl;
            break;
        }
    }
}

```
