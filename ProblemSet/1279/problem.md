# 重载函数：max
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
编写两个名为max的函数，它们是重载函数 ，用于求两个整数或实数的最大值。它们的原型分别是：
int max(int a,int b);
double max(double a,double b);
返回值是a和b的最大值。



## Input
输入4个数，前两个数是int类型的整数，后2个数是double类型的实数。


## Output
输出2个数，每个数占一行。第一个数对应于输入的两个整数的最大值，第二个数对应于输入的两个实数的最大值。


## Sample Input
```
1 2
1.4 1.3
```
## Sample Output
```
2
1.4
```

## HINT


## Append Code
### append.cc
```cppint main()
{
	int a,b;
	double c,d;
	cin>>a>>b;
	cout<<max(a,b)<<endl;
	cin>>c>>d;
	cout<<max(c,d)<<endl;
	return 0;
}
```
