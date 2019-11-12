# Matrix Problem (II) : Array Practice
Time Limit: 1 Sec  Memory Limit: 4 MB


## Description
求两个矩阵A、B的和。根据矩阵加法的定义，只有同阶的矩阵才能相加。可以确保所有运算结果都在int类型的范围之内。

## Input
输入数据为多个矩阵，每个矩阵以两个正整数m和n开始，满足0<m,n<=100，接下来为一个m行n列的矩阵A。当输入的m和n均为0时，表示输入数据结束

## Output
对输入的矩阵两两相加：第1个和第2个相加、第3个和第4个相加……按顺序输出矩阵相加的结果：每行两个元素之间用一个空格分开，每行最后一个元素之后为一个换行，在下一行开始输出矩阵的下一行。
若输入的矩阵不为偶数个，最后剩余的矩阵不产生任何输出。
不满足矩阵加法定义的数据输出“Not satisfied the definition of matrix addition!”
每两组输出之间用一个空行分隔开。

## Sample Input
```
3 3
1 2 3
4 5 6
7 8 9
3 3
9 8 7
6 5 4
3 2 1
3 3
1 1 1
1 1 1
1 1 1
2 2
2 2
2 2
1 1
0
0 0
```
## Sample Output
```
10 10 10
10 10 10
10 10 10

Not satisfied the definition of matrix addition!
```

## HINT
矩阵的加法就是对应位置上的元素相加。