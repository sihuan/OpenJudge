#include <iostream>
#include <cstdio>
#include <string>
#include <iomanip>
#include <typeinfo>
using namespace std;
 
class Publication
{
protected:
	double price;
	int length;
public:
	virtual double getTotalPrice() = 0;
	Publication(double p, int l) :price(p), length(l){ cout << "Call Publication's constructor!\n"; }
	double getPrice() const
	{
		return price;
	}
	double getLength()
	{
		return length;
	}
	virtual ~Publication(){ cout << "Call Publication's de-constructor!\n"; }
};
class Book :public Publication
{
public :
	Book(double p, int l) :Publication(p,l){ cout << "Call Book's constructor!\n"; }
	double getTotalPrice()
	{
		return price*length*1.0;
	}
	~Book(){ cout << "Call Book's de-constructor!\n"; }
};
class Tape :public Publication
{
public:
	Tape(double p, int l) :Publication(p,l){ cout << "Call Tape's constructor!\n"; }
	double getTotalPrice()
	{
		if (length % 10 == 0)
			length = length / 10;
		else
			length = length / 10 + 1;
		return price*length;
	}
	~Tape(){ cout << "Call Tape's de-constructor!\n"; }
};
class BookStore
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
/**************************************************************
	Problem: 1783
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1272 kb
****************************************************************/

