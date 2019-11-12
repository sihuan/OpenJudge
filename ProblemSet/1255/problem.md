# 编写函数：数组元素的查找 (Append Code)
Time Limit: 1 Sec  Memory Limit: 16 MB


## Description

在数组a[]中查找某个值val。

-----------------------------------------------------------------------------
结合“Append Code”中的代码，编写以下函数：
原型：int getarray(int a[]);
功能：遵循样例输入的格式读取一个数组存放在a[]里，返回输入的数组元素个数。
原型：int find(int a[], int n, int val);
功能：在有n个元素的数组a[]中查找值为val的元素。若找到，返回第一个值为val的元素下标，否则返回-1。
函数的调用格式见“Append Code”。





## Input
输入的第一行为一个整数M(M>0)，后面有M个测试样例。
每个测试样例有两行输入；第一行的第一个整数为N(N<=1000)，后接一个长度为N的数组a[]；第二行为一个整数值val。


## Output
输出有M行。每行输出一个测试样例的结果：若val在数组中，则输出第一个值为val的数组元素下标；否则输出“NOT FOUND”。


## Sample Input
```
4
3 1 2 3
1
5 10 15 20 30 50
50
4 100 200 300 400
500
0
0
```
## Sample Output
```
0
4
NOT FOUND
NOT FOUND

```

## HINT
 “Append Code”中用到的头文件、全局变量或宏的定义应自行补充。

## Append Code
### append.c
```cint main()
{
    int cases, i;
    int arr[MAX_SIZE], size;
    int val, found = 0;

    scanf("%d", &cases);
    for(i = 1; i <= cases; i++)
    {
        size  = getarray(arr);
        scanf("%d", &val);
        found = find(arr, size, val);
        if(found == -1)
        {
            printf("NOT FOUND\n");
            continue;
        }
        printf("%d\n", found);
    }
    return 0;
}
```
