# Apple
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
         Jackie开了一家水果店，要购入一些苹果（Apple）销售。苹果每批进货有三个属性每公斤单价（price）、每箱重量（weight）、有多少箱（amount）。请你编写程序计算每批苹果的价格。
用C++编写Apple类来完成代码，调用格式见“Append Code”。
Apple::input()按格式输入每批苹果进货的属性。
Apple::value()计算每批苹果的价格。


## Input
         输入为多组。首先输入进货次数，然后每次输入进货的单价（price）、每箱重量（weight）、有多少箱（amount）。


## Output
         每行输出本次进货苹果的价格。


## Sample Input
```
2
2.25 38.8 15
2.14 39.6 6

```
## Sample Output
```
1309.5
508.464

```

## HINT


## Append Code
### append.c
```c
int main()
{
    int i, cases;
    Apple apple;

    cin >> cases;
    for(i = 1; i <= cases; i++)
    {
        apple.input();
        cout << apple.value() << endl;
    }
}

```
### append.cc
```cpp
int main()
{
    int i, cases;
    Apple apple;

    cin >> cases;
    for(i = 1; i <= cases; i++)
    {
        apple.input();
        cout << apple.value() << endl;
    }
}

```
