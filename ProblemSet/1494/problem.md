# 用结构体来表示数组(Append Code)
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
有如下结构体定义：
typedef struct
{
    int length;
    int array[MAX_SIZE];
}ARR_TYPE;
其中，length表示数组中实际元素的个数，array[]用于存储length个数据，MAX_SIZE表示数组的最大长度。
要求编写如下两个函数：
1. int input_arr(ARR_TYPE *arr);
用于按照样例给定的格式输入arr的内容。
2. int output_arr(ARR_TYPE arr);
用于按照样例给定的格式输出arr中array的内容。

注意：提交时要提交相关的预处理命令（#include、#define等）以及结构体类型定义。


## Input
输入只有一行，第一个数N表示后面会有N个整数，其中0<N<=10001，之后有N个整数，两两之间用空格隔开。


## Output
输出只有一行，按照输入的顺序输出所有整数，两两之间用空格隔开。


## Sample Input
```
10 1 2 3 4 5 6 7 8 9 10
```
## Sample Output
```
1 2 3 4 5 6 7 8 9 10
```

## HINT


## Append Code
### append.c
```cint main()
{
   ARR_TYPE arr;
   input_arr(&arr);
   output_arr(arr);
    return 0;
}
```
