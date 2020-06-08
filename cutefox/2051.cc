#include<iostream>
#include<string>
using namespace std;
class Book
{
public:
    Book(string n,double p){
    name = n;
    price = p;
    cout<<"A book C++ is created."<<endl;
    }
    Book(){
    cout<<"A default book is created."<<endl;
    }
    ~Book(){
    cout<<"A book "<<name<<" is erased."<<endl;
    }
    string getName(){
    return name;
    }
    double getPrice(){
    return price;
    }
    void setName(string n){
    name = n;
    }
    void setPrice(double p)
    {
        price = p;
    }
private:
    double price;
    string name;
};
int main()
{
    Book books[4]={Book("C++", 42.0)};
    string tmp;
    double sum, price;
    int i;
    for (i = 0; i < 3; i++)
    {
        cin>>tmp>>price;
        books[i + 1].setName(tmp);
        books[i + 1].setPrice(price);
    }
    sum = 0;
    for (i = 0; i < 4; i++)
    {
        sum += books[i].getPrice();
    }
    cout<<"The four books are: " << books[0].getName();
    for (i = 1; i < 4; i++)
    {
        cout<<" "<<books[i].getName();
    }
    cout<<endl<<"Their total price is "<<sum<<endl;
    return 0;
}
/**************************************************************
	Problem: 2051
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1272 kb
****************************************************************/

