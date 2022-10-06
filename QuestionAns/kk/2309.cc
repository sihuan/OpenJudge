#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <vector>
#include <string>
#include <cstring>
#include <iomanip>

using namespace std;

class Citrus
{
public:
    void show()
    {
        cout<<name<<" "<<weight<<"kg, is citrus fruit."<<endl;
    }
protected:
    string name;
    double weight;
};

class Mandarin:virtual public Citrus
{
public:
    void show()
    {
        cout<<name<<" "<<weight<<"kg, is mandarin."<<endl;
    }
};

class Pomelo:virtual public Citrus
{
public:
    void show()
    {
        cout<<name<<" "<<weight<<"kg, is pomelo."<<endl;
    }
};

class Citron:virtual public Citrus
{
public:
    void show()
    {
        cout<<name<<" "<<weight<<"kg, is citron."<<endl;
    }
};

class Orange:virtual public Mandarin,virtual public Pomelo
{
public:
    void show()
    {
        cout<<name<<" "<<weight<<"kg, is orange."<<endl;
    }
};

class Lime:virtual public Pomelo,virtual public Citron
{
public:
    void show()
    {
        cout<<name<<" "<<weight<<"kg, is lime."<<endl;
    }
};

class Tangerine:virtual public Mandarin,virtual public Orange
{
public:
    Tangerine(string _name,double _weight)
    {
        name=_name;
        weight=_weight;
    }
    void show()
    {
        cout<<name<<" "<<weight<<"kg, is tangerine."<<endl;
    }
};

class Grapefruit:virtual public Orange,virtual public Pomelo
{
public:
    Grapefruit(string _name,double _weight)
    {
        name=_name;
        weight=_weight;
    }
    void show()
    {
        cout<<name<<" "<<weight<<"kg, is grapefruit."<<endl;
    }
};

class Lemon:virtual public Orange,virtual public Lime
{
public:
    Lemon(string _name,double _weight)
    {
        name=_name;
        weight=_weight;
    }
    void show()
    {
        cout<<name<<" "<<weight<<"kg, is lemon."<<endl;
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
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1276 kb
****************************************************************/

