# 编写函数：数组的下标 (Append Code)
Time Limit: 1 Sec  Memory Limit: 16 MB


## Description


         给出一个不超过N个元素的数组，用下标做查询操作。数组的下标一般为0～N-1之间，在这里数组的下标扩展到负数（即-1～-N），如-1表示倒数第1个元素，-k表示倒数第k个元素。
 
         编写两个函数get_array()和array_value()完成程序：
                   原型：int get_array(int a[]);
                   功能：按样例格式读取n个整数储存的数组a[]中，并返回a[]的元素个数。
                   原型：array_value(int a[], int n, int k);
                   功能：在n个元素的数组a[]中查找下标为k的元素并返回，k支持负下标。

         函数的调用格式见“Append Code”。


## Input


         测试数据包含一个数组和若干整数k，至EOF结束。数组以一个非负整数N（N<=1000）开始，后接N个整数。k的取值范围是-N<=k<=N-1，当k>=0时，为正下标，k<0时为负下标。


## Output

         对每组样例产生一个输出，输入产生一行输出。对于每行的N个元素，将前半部分和后半部分分别进行逆序输出。



## Sample Input
```
10 0 1 2 3 4 5 6 7 8 9
1
-1

```
## Sample Output
```
1
9

```

## HINT


## Append Code
### append.c
```c
int main()
{
    int size, arr[1000], m, k;
    size = get_array(arr);
    while(scanf("%d", &k) != EOF)
        printf("%d\n", array_value(arr, size, k));
    return 0;
}
```
