#include <bits/stdc++.h>
using namespace std;

class Animal
{
private:
    string name;
    int num;
public:
    Animal():name(""),num(0){}
    void setAnimal(string q,int w)
    {
        name=q;num=w;
    }
    int getNum() const{return num;}
    string getName() const{return name;}
 friend class AnimalList;
};

class AnimalList
{
    friend class Animal;
private:
    Animal *a;
    int numOfAnimal;
public:
    AnimalList(Animal *animals, int n)
    {
        numOfAnimal=n;
        a=new Animal[n];
        for(int i=0;i<n;++i)
        {
            a[i]=animals[i];
        }
    }
     int operator [](const string n)
    {
        for(int i=0; i<numOfAnimal; i++)
        {
            if(a[i].name == n)
                return a[i].num;
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
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1272 kb
****************************************************************/

