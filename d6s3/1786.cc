#include <iostream>
#include <string>
using namespace std;

class Animal {
private:
    string name_;
    int num_;

public:
    Animal()
        : name_("")
        , num_(0)
    {
    }
    void setAnimal(string s, int n)
    {
        name_ = s;
        num_ = n;
    }
    int getNum() const
    {
        return num_;
    }
    string getName() const
    {
        return name_;
    }
    Animal& operator=(const Animal& a)
    {
        name_ = a.name_;
        num_ = a.num_;
        return *this;
    }
};

class AnimalList {
private:
    int num_;
    Animal* anl_;

public:
    AnimalList(Animal* a, int n)
        : num_(n)
        , anl_(a)
    {
    }
    int operator[](string n)
    {
        for (int i = 0; i < num_; i++) {
            if (anl_[i].getName() == n)
                return anl_[i].getNum();
        }
        return -1;
    }
};
int main()
{
    int cases;
    string name;
    int num;
    cin>>cases;
    Animal animals[cases];
    for (int i = 0; i < cases; i++)
    {
        cin>>name>>num;
        animals[i].setAnimal(name, num);
    }
    AnimalList animalList(animals, cases);

    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
        cin>>name;
        if (animalList[name] != -1)
            cout<<"There are "<<animalList[name]<<" "<<name<<"s."<<endl;
        else
            cout<<"There is none "<<name<<"."<<endl;
    }
    return 0;
}
/**************************************************************
	Problem: 1786
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1272 kb
****************************************************************/

