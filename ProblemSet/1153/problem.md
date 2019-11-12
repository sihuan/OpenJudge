# 编写函数：一维数组的逆序 (Append Code)
Time Limit: 1 Sec  Memory Limit: 16 MB


## Description
现有一个不超过N个元素的数组，将数组中的元素反转输出，即求其逆序。
-----------------------------------------------------------------------------
结合“Append Code”中的代码，编写以下函数：
原型：int get_array(int a[]);
功能：遵循样例输入的格式读取若干整数存放在a[]里，返回值为实际输入的元素个数。
原型：int put_array(int a[], int n);
功能：按格式输出a[]中的前n个元素。
原型：int reverse_array(int a[], int n);
功能：将a[]中的前n个元素反转。
函数的调用格式见“Append Code”。


## Input


输入多组测试样例。输入的第一个整数是M>0，表示后面有M个测试样例。
每个测试样例的第一个整数是N(0<=N<=1000)，后面跟N个整数。





## Output

输出为M行，每行与输入一一对应，格式为：

case i:d1 d2 ...
其中i为测试输入的编号，从1开始。冒号后面为第i个输入的对应输出，如果第i个输入的N为0，则不产生任何输出。



## Sample Input
```
3
10
10 9 8 7 6 5 4 3 2 1
0
5
1 2 3 4 5
```
## Sample Output
```
case 1:1 2 3 4 5 6 7 8 9 10
case 2:
case 3:5 4 3 2 1
```

## HINT
“Append Code”中用到的头文件、全局变量或宏的定义应自行补充。

## Append Code
### append.c
```c
int main()
{
    int cases, i;
    int array[MAX_SIZE], size;
    scanf("%d", &cases);
    for(i = 1; i <= cases; i++)
    {
        size = get_array(array);
        reverse_array(array, size);
        printf("case %d:", i);
        put_array(array, size);
    }
    return 0;
}
```
