# Sequence Problem (IV) : Function Practice (Append Code)
Time Limit: 1 Sec  Memory Limit: 4 MB


## Description
整数序列是一串按特定顺序排列的整数，整数序列的长度是序列中整数的个数，不可定义长度为负数的整数序列。
两整数序列A、B的和定义为一个新的整数序列C，序列C的长度是A、B两者中较长的一个，序列C的每个位置上的整数都是A、B对应位置之和。若序列A、B不等长，不妨假设A比B整数多，那么序列C中多出B的那部分整数视作A的对应位置上的整数与0相加。
你的任务是计算符合某些要求的整数序列的和，这些序列中的整数都是小于1000的非负整数。
-----------------------------------------------------------------------------
编写以下函数，使append.c中的main()函数能正确运行：
原型：int max(int a, int b);
功能：返回a和b中较大的一个int值。
原型：int init_seq(int seq[], int size);
功能：把int数组seq[]中的前size个元素初始化为0。
原型：int get_seq(int seq[]);
功能：按输入格式的要求，读取size个元素存放在seq[]，返回读到的元素个数。
原型：int put_seq(int seq[], int size);
功能：按输出格式的要求，把seq[]中的前size个元素输出。
原型：int add_seq(int sum_seq[], int add_seq[], int size);
功能：把sum_seq[]和add_seq[]中的前size个元素相加，结果存储sum_seq[]中。



## Input
输入的第一行为一个整数M(M>0)，后面有M行输入。每行第一个整数为N(N<=1000)，后接一个长度为N的整数序列。

## Output
对输入的整数序列两两相加：第1行和第2行相加、第2行和第3行相加……按顺序输出结果：每行输出一个整数序列，每两个整数之间用一个空格分隔。若最后序列不足两个，则视作补一个长度为0的整数序列相加。
值得注意的是一个长度为0的整数序列也应该有输出，即使没有整数输出，也应该占有一行，因为“每行输出一个整数序列”。

## Sample Input
```
3
3 1 2 3
5 10 15 20 30 50
4 100 200 300 400

```
## Sample Output
```
11 17 23 30 50
110 215 320 430 50
100 200 300 400

```

## HINT
append.c中的main()函数简述：
1. 定义两个数组odd_seq[]和even_seq[]，分别存储奇数行输入的序列和偶数行输入序列，odd_size和even_size是输入的序列元素个数。
2. 输入总行数m；
3. 初始化odd_seq[]的全部元素，输入第一行序列，存入odd_seq[]，元素个数存入odd_size；
4. 从第2行至第m行重复以下步骤：
     4.1 要输入的是偶数行：even_seq[]全体清0，读even_seq[]，把even_seq[]加到odd_seq[]上，输出odd_seq[]；
     4.2 要输入的是奇数行时与偶数行操作的变量相反，步骤一致；
5. 输出最后一行。


## Append Code
### append.c
```c
int main()
{
    int  odd_seq[MAX_SIZE],  odd_size;
    int even_seq[MAX_SIZE], even_size;
    int m, i, put_size;

    scanf("%d", &m);
    init_seq(odd_seq, MAX_SIZE);
    odd_size = get_seq(odd_seq);
    for(i = 2; i <= m; i++)
    {
        if(i % 2 == 0)
        {
            init_seq(even_seq, MAX_SIZE);
            even_size = get_seq(even_seq);
            put_size = max(odd_size, even_size);
            add_seq(odd_seq, even_seq, put_size);
            put_seq(odd_seq, put_size);
        }
        else
        {
            init_seq(odd_seq, MAX_SIZE);
            odd_size = get_seq(odd_seq);
            put_size = max(odd_size, even_size);
            add_seq(even_seq, odd_seq, put_size);
            put_seq(even_seq, put_size);
        }
    }
    if(m % 2 == 0)
        put_seq(even_seq, even_size);
    else
        put_seq(odd_seq, odd_size);
    return 0;
}
```
