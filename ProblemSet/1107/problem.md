# 编写函数：Swap (I) (Append Code)
Time Limit: 1 Sec  Memory Limit: 16 MB


## Description

编写用来交换两个数的函数，使得“Append Code”中的main()函数能正确运行。

-----------------------------------------------------------------------------
用C实现三个函数int_swap()、dbl_swap()、SWAP()，其中SWAP()是个带参宏。
用C++实现两个函数，都以swap()命名。
以上函数的调用格式见“Append Code”。这里不给出函数原型，它们的参数请通过main()函数自行确定。


## Input
输入为4行，每行2个数。

## Output
输出为4行，每行2个数。每行输出的两数为每行输入的逆序。

## Sample Input
```
12 57
9 -3
-12 4
3 5

```
## Sample Output
```
57 12
-3 9
4 -12
5 3
```

## HINT
“Append Code”中用到的头文件、全局变量或宏的定义应自行补充。

## Append Code
### append.c
```c
int main()
{
    int x1, y1, t1;
    double x2, y2, t2;

    scanf("%d %d", &x1, &y1);
    int_swap(&x1, &y1);
    printf("%d %d\n", x1, y1);

    scanf("%d %d", &x1, &y1);
    SWAP(t1, x1, y1);
    printf("%d %d\n", x1, y1);

    scanf("%lf %lf", &x2, &y2);
    dbl_swap(&x2, &y2);
    printf("%lg %lg\n", x2, y2);

    scanf("%lf %lf", &x2, &y2);
    SWAP(t2, x2, y2);
    printf("%lg %lg\n", x2, y2);
}

```
### append.cc
```cppint main()
{
    int x1, y1;
    
    cin>>x1>>y1;
    swap(&x1, &y1);
    cout<<x1<<" "<<y1<<endl;
    
    cin>>x1>>y1;
    swap(x1, y1);
    cout<<x1<<" "<<y1<<endl;

    double x2, y2;
    
    cin>>x2>>y2;
    swap(&x2, &y2);
    cout<<x2<<" "<<y2<<endl;
    
    cin>>x2>>y2;
    swap(x2, y2);
    cout<<x2<<" "<<y2<<endl;
}
```
