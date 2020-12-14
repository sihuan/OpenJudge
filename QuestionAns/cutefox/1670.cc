
#include <iostream>
using namespace std;
class Fruit
{
public:
    virtual void input() = 0;
    virtual double total()  const = 0;
public:
    Fruit( ) { }
protected:
    double uprice;
    int num;
};
class Apple : public Fruit
{
public:
    void input() {  cin >> uprice; cin >> num; }
    double total()  const { return uprice * num * 30; }
public:
    Apple( ) : Fruit() {  }
};
 
class Banana : public Fruit
{
public:
  void input() {  cin >> uprice; cin >> num; }
    double total()  const { return uprice * num * 25; }
public:
    Banana( ) : Fruit() {  }
};
 
class Pear : public Fruit
{
public:
   void input() {  cin >> uprice; cin >> num; }
    double total()  const { return uprice * num * 20; }
public:
    Pear( ) : Fruit() {  }
};

int main()
{
    Fruit* fruit;
    string fruit_name;
    double sum = 0.0;
    int cases;
    cin >> cases;
    for(int i = 1; i <= cases; i++)
    {
        cin >> fruit_name;
        if(fruit_name == "Apple")
            fruit = new Apple();
        if(fruit_name == "Banana")
            fruit = new Banana();
        if(fruit_name == "Pear")
            fruit = new Pear();
        fruit->input();
        sum += fruit->total();
        delete fruit;
    }
    cout << "Total Price : " << sum << endl;

     return 0;
}

/**************************************************************
	Problem: 1670
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

