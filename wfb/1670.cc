#include <iostream>

using namespace std;

class Fruit{
public:
    Fruit() : d_(0),n_(0){}
    virtual double total() const=0;
    void input() {cin>>d_>>n_;}
    virtual ~Fruit() {}
protected:
    double d_;
    int n_;

};
class Apple:virtual public Fruit{
public:
    Apple() : Fruit(){}
    double total() const {return d_*n_*30;}
};
class Banana:virtual public Fruit{
public:
    Banana() : Fruit() {}
    double total() const {return d_*n_*25;}
};
class Pear : virtual public Fruit{
public:
    Pear() : Fruit() {}
    double total() const {return d_*n_*20;}
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
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1272 kb
****************************************************************/

