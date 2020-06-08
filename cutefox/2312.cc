#include <iostream>
using namespace std;
class Fruit
{
    double w;
public:
    Fruit(double a):w(a) {}
    virtual double weight()
    {
        return w;
    }
    virtual double juice_weight()=0;
    virtual double salad_weight()=0;
};
class Juice:virtual public Fruit
{
public:
    double juice_ratio;
    Juice(double a,double b):Fruit(a),juice_ratio(b) {}
    double juice_weight()
    {
        return Fruit::weight()*juice_ratio;
    }
    double salad_weight()
    {
        return 0;
    }
};
class Salad:virtual public Fruit
{
public:
    double Salad_ratio;
    Salad(double a,double b):Fruit(a),Salad_ratio(b) {}
    double salad_weight()
    {
        return Fruit::weight()*Salad_ratio;
    }
    double juice_weight()
    {
        return 0;
    }
};
class JuiceSalad:public Salad,public Juice
{
public:
    JuiceSalad(double a,double b,double c):Juice(a,b),Salad(a,c),Fruit(a) {}
  
    double juice_weight()
    {
        return 0.6*weight()*juice_ratio;
    }
    double salad_weight()
    {
        return 0.4*weight()*Salad_ratio;
    }
  
};
class Apple:public JuiceSalad
{
public:
    Apple(double a,double b,double c):JuiceSalad(a,b,c),Fruit(a) {}
  
};
class Peach:public JuiceSalad
{
public:
    Peach(double a,double b,double c):JuiceSalad(a,b,c),Fruit(a) {}
  
};
class Banana:public Salad
{
public:
  
    Banana(double a,double b):Salad(a,b),Fruit(a) {}
};
class Pineapple:public Juice
{
public:
    Pineapple(double a,double b):Juice(a,b),Fruit(a) {}
  
};


int main()
{
    Fruit* fruit[100];
    Juice* juice[100];
    Salad* salad[100];

    string name;
    int cases, f, j, s;
    f = j = s = 0;
    cin >> cases;
    while(cases--)
    {
        cin >> name;
        double weight, s_ratio, j_ratio;
        if(name == "Peach")
        {
            cin >> weight >> j_ratio >> s_ratio;
            Peach* p = new Peach(weight, j_ratio, s_ratio);
            fruit[f++] = p;
            juice[j++] = p;
            salad[s++] = p;
        }
        if(name == "Pineapple")
        {
            cin >> weight >> j_ratio;
            Pineapple* p = new Pineapple(weight, j_ratio);
            fruit[f++] = p;
            juice[j++] = p;
        }
        if(name == "Banana")
        {
            cin >> weight >> s_ratio;
            Banana* b = new Banana(weight, s_ratio);
            fruit[f++] = b;
            salad[s++] = b;
        }
        if(name == "Apple")
        {
            cin >> weight >> j_ratio >> s_ratio;
            Apple* a = new Apple(weight, j_ratio, s_ratio);
            fruit[f++] = a;
            juice[j++] = a;
            salad[s++] = a;
        }
    }

    double fruit_weight, salad_weight, juice_weight;
    fruit_weight = salad_weight = juice_weight = 0;
    for(int i = 0; i < f; i++)
        fruit_weight += fruit[i]->weight();
    cout << "All fruits weight " << fruit_weight << " kg." << endl;
    for(int i = 0; i < j; i++)
        juice_weight += juice[i]->juice_weight();
    cout << "These fruits can juicing " << juice_weight << " kg fruit juice." << endl;
    for(int i = 0; i < s; i++)
        salad_weight += salad[i]->salad_weight();
    cout << "These fruits can making " << salad_weight << " kg fruit salad." << endl;
}

/**************************************************************
	Problem: 2312
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1272 kb
****************************************************************/

