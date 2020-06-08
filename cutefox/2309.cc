#include <iostream>
#include<string>
#include<iomanip>
using namespace std;
class Citrus
{
public:
     string _name;
    double _weight;
    Citrus() {}
    Citrus(string n, double w) : _name(n), _weight(w) {}
    void show()
    {
        cout << _name << " " << _weight << "kg, is citrus fruit.\n";
    }
};
class Mandarin : virtual public Citrus
{
public:
    Mandarin() {}
    Mandarin(string n, double w) : Citrus(n, w) {}
    void show()
    {
        cout << _name << " " << _weight << "kg, is mandarin.\n";
    }
};
class Pomelo : virtual public Citrus
{
public:
    Pomelo() {}
    Pomelo(string n, double w) : Citrus(n, w) {}
    void show()
    {
        cout << _name << " " << _weight << "kg, is pomelo.\n";
    }
};
class Citron : virtual public Citrus
{
public:
    Citron() {}
    Citron(string n, double w) : Citrus(n, w) {}
    void show()
    {
        cout << _name << " " << _weight << "kg, is citron.\n";
    }
};
class Orange : virtual public Mandarin, virtual public Pomelo
{
public:
    Orange() {}
    Orange(string n, double w) : Citrus(n, w) {}
    void show()
    {
        cout << _name << " " << _weight << "kg, is orange.\n";
    }
};
class Lime : virtual public Pomelo, virtual public Citron
{
public:
    Lime() {}
    Lime(string n, double w) : Citrus(n, w) {}
    void show()
    {
        cout << _name << " " << _weight << "kg, is lime.\n";
    }
};
class Tangerine : virtual public Mandarin, virtual public Orange
{
public:
    Tangerine(string n, double w) : Citrus(n, w) {}
    void show()
    {
        cout << _name << " " << _weight << "kg, is tangerine.\n";
    }
};
class Lemon : virtual public Orange, virtual public Lime
{
public:
    Lemon(string n, double w) : Citrus(n, w) {}
    void show()
    {
        cout << _name << " " << _weight << "kg, is lemon.\n";
    }
};
class Grapefruit : virtual public Orange, virtual public Pomelo
{
public:
    Grapefruit(string n, double w) : Citrus(n, w) {}
    void show()
    {
        cout << _name << " " << _weight << "kg, is grapefruit.\n";
    }
};

int main()
{
    Citrus     *c;
    Mandarin   *ma;
    Pomelo     *po;
    Citron     *ci;
    Orange     *og;
    Lime       *li;
    Tangerine  *ta;
    Grapefruit *gr;
    Lemon      *le;

    string name;
    double weight;
    while(cin >> name >> weight)
    {
        if(name == "Tangerine")
        {
            Tangerine tangerine(name, weight);
            c = ma = og = ta = &tangerine;
            c->show();
            ma->show();
            og->show();
            ta->show();
        }
        if(name == "Grapefruit")
        {
            Grapefruit grapefruit(name, weight);
            c = po = gr = &grapefruit;
            c->show();
            po->show();
            gr->show();
        }
        if(name == "Lemon")
        {
            Lemon lemon(name, weight);
            ma = og = &lemon;
            ci = li = &lemon;
            po = le = &lemon;
            ma->show();
            po->show();
            ci->show();
            og->show();
            li->show();
            le->show();
        }
    }
}

/**************************************************************
	Problem: 2309
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1276 kb
****************************************************************/

