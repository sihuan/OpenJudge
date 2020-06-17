# Cherry
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
         Jackie开了一家水果店，店里新进了m箱樱桃（Cherry），每箱重n公斤，樱桃的属性是是重量（weight）。现有樱桃的销售记录。请你编写程序计算剩余的樱桃重量。
用C++编写Cherry类来完成代码，调用格式见“Append Code”。
Cherry::weight()樱桃的重量。
Cherry::weight(double)修改樱桃的重量。
Cherry::sold_weight()减去销售樱桃的重量。
Cherry的构造根据题意设计。


## Input
         第一行先输入n和m。然后一个整数k（k<100），后面有k行樱桃的销售记录，每次销售记录下卖出的樱桃重量（公斤数）。


## Output
         输出剩余樱桃的重量（公斤数）。


## Sample Input
```
25 12
5
8.9
43.2
16.66
31
2

```
## Sample Output
```
198.24
```

## HINT


## Append Code
### append.c
```c
int main()
{
    double weight, amount;
    cin >> weight >> amount;

    Cherry cherry(weight, amount);
    Cherry sold_cherry[100];

    int cases;
    cin >> cases;
    for(int i = 0; i < cases; i++)
    {
        double w;
        cin >> w;
        sold_cherry[i].weight(w);
        cherry.sold_weight(w);
    }
    cout << cherry.weight() << endl;
}

```
### append.cc
```cpp
int main()
{
    double weight, amount;
    cin >> weight >> amount;

    Cherry cherry(weight, amount);
    Cherry sold_cherry[100];

    int cases;
    cin >> cases;
    for(int i = 0; i < cases; i++)
    {
        double w;
        cin >> w;
        sold_cherry[i].weight(w);
        cherry.sold_weight(w);
    }
    cout << cherry.weight() << endl;
}

```
