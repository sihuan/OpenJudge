# 来开个书店吧
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
某出版社可出版图书和磁带。其中图书按照每页的价格乘以页数进行定价，磁带根据每10分钟的价格乘以磁带录音的分钟数进行定价。请定义Publicatioin、Book、Tape以及BookStore四个类。其中：
1. Publication类：
1）数据成员double price表示单价（对于书，是每页的价格；对于磁带，是每10分钟录音的价格）。
2）数据成员int length表示出版物的长度，对于书，是页数；对于磁带， 是分钟数。
3）成员函数getTotalPrice()用于返回一个出版物的定价。
4）构造函数Publication(double, int)用于构造一个出版物。
5）成员函数double getPrice() const和int getLength()用于返回出版物的单价及长度。
6）析构函数。
2. Book类是Publication的子类。
1）构造函数Book(double,int)。
2）重写父类的getTotalPrice返回定价，定价为单价乘以长度（即页数）。
3）析构函数。
3. Tape是Publication的子类：
1）构造函数Tape(double,int)。
2）重写父类的getTotalPrice返回定价。注意：price属性是每10分钟录音的单价，而磁带的长度不一定是10的整数倍。计算定价时，不足10分钟部分，按照10分钟计算。
3）析构函数。
4.BookStore是书店，具有数据成员Publications **pubs，是书店拥有的出版物列表；int num表示书店拥有的出版物数量。成员函数int getNumOfBook()和int getNumOfTape()分别计算书店中拥有的Book和Tape的数量。该类已经在appcode code中给出。


## Input
输入分多行。
第一行是整数M>0，表示有M个测试用例。
每个测试占一行，分为三部分：第一部分是出版物类型（B表示Book，T表示Tape）、单价和数量（页数或分钟数）。


## Output
见样例。


## Sample Input
```
3
B 0.10 201
T 0.50 100
T 0.40 105

```
## Sample Output
```
Call Publication's constructor!
Call Book's constructor!
Call Publication's constructor!
Call Tape's constructor!
Call Publication's constructor!
Call Tape's constructor!
Call Publication's constructor!
Call Book's constructor!
Call Publication's constructor!
Call Tape's constructor!
Call Publication's constructor!
Call Tape's constructor!
There are 1 books and 2 tapes. Their total price is 29.50.
Call Book's de-constructor!
Call Publication's de-constructor!
Call Tape's de-constructor!
Call Publication's de-constructor!
Call Tape's de-constructor!
Call Publication's de-constructor!
Call Book's de-constructor!
Call Publication's de-constructor!
Call Tape's de-constructor!
Call Publication's de-constructor!
Call Tape's de-constructor!
Call Publication's de-constructor!
Call BookStore's de-constructor!

```

## HINT
 使用typeid判断对象指针指向的实际对象的类型。

## Append Code
### append.cc
```cppclass BookStore
{
private:
    Publication **pubs;
    int num;
public:
    BookStore(Publication **p, int n)
    {
        pubs = new Publication*[n];
        num = n;
        for (int i = 0; i < n; i++)
        {
            if (typeid(*(p[i])) == typeid(Book))
            {
                pubs[i] = new Book(p[i]->getPrice(), p[i]->getLength());
            }
            else
            {
                pubs[i] = new Tape(p[i]->getPrice(), p[i]->getLength());
            }
        }
    }
    int getNumOfBook()
    {
        int c = 0;
        for (int i = 0; i < num; i++)
        {
            if (typeid(*(pubs[i])) == typeid(Book))
                c++;
        }
        return c;
    }
    int getNumOfTape()
    {
        int c = 0;
        for (int i = 0; i < num; i++)
        {
            if (typeid(*(pubs[i])) == typeid(Tape))
                c++;
        }
        return c;
    }
    ~BookStore()
    {
        for (int i = 0; i < num; i++)
        {
            delete pubs[i];
        }
        delete[] pubs;
        cout<<"Call BookStore's de-constructor!\n";
    }
};
int main()
{
    int cases, date;
    char type;
    double total,price;
    Publication **pub;
    cin>>cases;
    pub = new Publication*[cases];
    for (int i = 0; i < cases; i++)
    {
        cin>>type>>price>>date;
        switch(type)
        {
        case 'B':
            pub[i] = new Book(price,date);
            break;
        case 'T':
            pub[i] = new Tape(price,date);
            break;
        }
    }
    BookStore bookStore(pub, cases);
    cout<<"There are "<<bookStore.getNumOfBook()<<" books and "<<bookStore.getNumOfTape()<<" tapes.";
    total = 0;
    for (int i = 0; i < cases; i++)
    {
        total += pub[i] -> getTotalPrice();
    }
    cout<<" Their total price is "<<setprecision(2)<<fixed<<total<<"."<<endl;
    for (int i = 0; i < cases; i++)
    {
        delete pub[i];
    }
    delete[] pub;
    return 0;
}
```
