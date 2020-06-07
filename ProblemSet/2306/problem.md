# Banana
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
         Jackie开了一家水果店，销售香蕉（Banana），香蕉的属性是重量（weight）。香蕉每天进货m公斤，每销售一次就记录下来。请你编写程序计算每天剩余的香蕉重量。
用C++编写Banana类来完成代码，调用格式见“Append Code”。
Banana::weight()香蕉的重量。
Banana类重载运算符“-=”，减去销售的香蕉重量。
Banana类的构造，初始化每天的进货重量。


## Input
         首先输入每天进货的香蕉数。然后输入每次销售香蕉数。


## Output
         输出每天剩余多少公斤香蕉。


## Sample Input
```
15
3.5
1.2
6
0.7

```
## Sample Output
```
3.6
```

## HINT


## Append Code
### append.c
```c
int main()
{
    double weight, sale_weight;

    cin >> weight;
    Banana banana(weight);
    while(cin >> sale_weight)
        banana -= sale_weight;
    cout << banana.weight() << endl;
}

```
### append.cc
```cpp
int main()
{
    double weight, sale_weight;

    cin >> weight;
    Banana banana(weight);
    while(cin >> sale_weight)
        banana -= sale_weight;
    cout << banana.weight() << endl;
}

```
