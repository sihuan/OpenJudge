# 复数类模板
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
定义一个类模板Complex，有一个类型参数T。包括T类型的两个属性real和imag，分别是复数的实部和虚部。有一个成员函数double getModulus()用于求复数的模。复数的模定义为实部与虚部的平方和的平方根。

## Input
有2行。第一行是2个int类型的整数；第二行是2个double类型的实数。

## Output
两个复数的模。

## Sample Input
```
3 4
3.56 2.13
```
## Sample Output
```
5.00
4.15
```

## HINT


## Append Code
### append.cc
```cppint main()
{
    int a, b;
    double c, d;
    cin>>a>>b;
    Complex<int> c1(a, b);
    cout<<setiosflags(ios::fixed)<<setprecision(2)<<c1.getModulus()<<endl;
    cin>>c>>d;
    Complex<double> c2(c, d);
    cout<<setiosflags(ios::fixed)<<setprecision(2)<<c2.getModulus()<<endl;
    return 0;
}
```
