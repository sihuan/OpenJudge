#include<iostream>
#include<cstring>
using namespace std;
class Book
{
    private:
        double price;
        string name;
    public:
        Book(string y,double x):name(y),price(x){cout<<"A book "<<name<<" is created."<<endl;}
        Book(){cout<<"A default book is created."<<endl;}
        ~Book(){cout<<"A book "<<name<<" is erased."<<endl;}
        void setName(string a){name=a;}
        void setPrice(double b){price=b;}
        string getName(){return name;}
        double getPrice(){return price;}
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
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1272 kb
****************************************************************/

