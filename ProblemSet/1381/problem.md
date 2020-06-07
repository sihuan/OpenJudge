# 求(x-y+z)*2
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
编写一个程序，求解以下三个函数：
f(x,y,z)=2*(x-y+z)
f(x,y)  =2*(x-y)
f(x)    =2*(x-1)

函数调用格式见append.cc。

append.cc中已给出main()函数。



## Input
输入的测试数据为多组。每组测试数据的第一个数是n（1<=n<=3），表示后面有n个整数。
当n为3时，后跟3个输入为x,y,z；
当n为2时，后跟2个输入为x,y；
当n为1时，后跟1个输入为x；
当n为0时，表示输入结束
输入的n不会有其他取值。

所有运算都不会超出int类型范围。


## Output
每组测试数据对应一个输出。输出x-y+z的值。


## Sample Input
```
3 121 38 45
2 39 11
1 73

```
## Sample Output
```
256
56
144

```

## HINT


## Append Code
### append.cc
```cpp
int main()
{
    int n, x, y, z;
    while(cin>>n)
    {
        if(n == 3)
        {
            cin>>x>>y>>z;
            cout<<f(x, y, z)<<endl;
        }
        if(n == 2)
        {
            cin>>x>>y;
            cout<<f(x, y)<<endl;
        }
        if(n == 1)
        {
            cin>>x;
            cout<<f(x)<<endl;
        }
        if(n == 0)
            break;
    }
}

```
