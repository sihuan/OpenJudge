# 编写函数：求矩阵各列的平均值 (Append Code)
Time Limit: 1 Sec  Memory Limit: 16 MB

## Description
编写一个程序，求矩阵中各列元素值相加的平均值。其中，矩阵的元素都是很小的整数，且各列元素之和的数值不会超出int类型的表示范围。

-----------------------------------------------------------------------------

编写三个函数完成程序：

原型：int get_matrix(int mtx[][], int m, int n);

功能：按照输入格式，读取一个m行n列的矩阵存放在二维数组mtx[][]中。

原型：int put_array(double arr[], int n);

功能：按照输出格式，输出有n个元素的一维数组arr[]。

原型：int count_average(double arr[], int mtx[][], int m, int n);

功能：计算m行n列的矩阵mtx[][]各列的平均值，存放到数组arr[]中。

函数的调用格式见“Append Code”。

## Input
输入为多行。第一行K>0，表示有K个测试用例。

之后K个测试用例中，首先是两个整数0<=M,N<=100，表示该测试用例的矩阵是一个M行N列的矩阵。之后是一个M行N列的整数组成的矩阵。

## Output
输出有K行，每个测试用例的结果占一行。每行的格式为：

case i:d1 d2 ... dj

其中i表示测试用例的编号（从1开始），d1、d2、....、dj表示相应测试用例的各列元素相加的平均值，两两之间用空格隔开。

每个平均值用%lg输出即可。

## Sample Input
```
4
3 3
1 2 3
1 2 3
1 2 3
2 3
1 1 1
1 1 1
1 1
1
5 1
3
4
5
6
7
```
## Sample Output
```
case 1:1 2 3
case 2:1 1 1
case 3:1
case 4:5
```

## HINT
  “Append Code”中用到的头文件、全局变量或宏的定义应自行补充。

## Append Code
### append.c
```c
int main()
{
    int i, cases;
    double average[MAX_SIZE];
    int m, n, matrix[MAX_SIZE][MAX_SIZE];
    scanf("%d", &cases);
    for(i = 1; i <= cases; i++)
    {
        scanf("%d%d", &m, &n);
        get_matrix(matrix, m, n);
        count_average(average, matrix, m, n);
        printf("case %d:", i);
        put_array(average, n);
    }
    return 0;
}
```