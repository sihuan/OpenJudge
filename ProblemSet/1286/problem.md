# 编写函数：矩阵乘法 (Append Code)
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description

给出一个m行n列的矩阵A和一个n行q列的矩阵B，求它们的乘积。

-----------------------------------------------------------------------------
结合“Append Code”中的代码，编写以下函数（形参中ma[][]的数组大小需自己补全）：
原型：int get_matrix(int ma[][], int m, int n);
功能：遵循样例输入的格式读取一个m行n列的矩阵存储在ma[][]里。
原型：int put_matrix(int ma[][], int m, int n);
功能：按格式输出一个m行n列矩阵ma[][]的所有元素。
原型：int mul_matrix(int pr[][], int m1[][], int m2[][], int m, int n, int q);
功能：计算m行n列的矩阵m1[][]和n行q列的矩阵m2[][]的乘积pr[][]。
函数的调用格式见“Append Code”。


## Input
输入分为三部分，首先输入三个正整数m,n,q，其次是一个m行n列的矩阵A，最后是一个n行q列的矩阵B，矩阵的元素均为整数。m、n、q均不超过100。

## Output
输出一个m行q列的矩阵。矩阵的每行元素输出为一行，矩阵每列元素间一个用空格分开。

## Sample Input
```
2 2 3
1 1
2 0
0 2 3
1 1 2

```
## Sample Output
```
1 3 5
0 4 6

```

## HINT
定义多维维数组做形参时，元素的个数要小心定义。

## Append Code
### append.c
```c
int main()
{
    int m, n, q;
    int product[MAX_SIZE][MAX_SIZE];
    int matrix1[MAX_SIZE][MAX_SIZE];
    int matrix2[MAX_SIZE][MAX_SIZE];
 
    scanf("%d%d%d", &m, &n, &q);
    get_matrix(matrix1, m, n);
    get_matrix(matrix2, n, q);
    mul_matrix(product, matrix1, matrix2, m, n, q);
    put_matrix(product, m, q);
 
    return 0;
}
```
