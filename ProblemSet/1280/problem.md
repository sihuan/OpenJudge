# 默认参数：求圆面积
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
编写一个带默认值的函数，用于求圆面积。其原型为：
double area(double r=1.0);
当调用函数时指定参数r，则求半径为r的圆的面积；否则求半径为1的圆面积。
其中，PI取值3.14。


## Input
一个实数，是圆的半径。


## Output
输出有2行。第一行是以输入数值为半径的圆面积，第二行是半径为1的圆面积。


## Sample Input
```
19
```
## Sample Output
```
1133.54
3.14
```

## HINT


## Append Code
### append.cc
```cppint main()
{
	double r;
	cin>>r;
	cout<<area(r)<<endl;
	cout<<area()<<endl;
	return 0;
}
```
