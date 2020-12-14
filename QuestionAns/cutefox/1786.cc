
#include <iostream>
using namespace std;
class Animal
{
public :
    string name;
    int num;
    Animal():name("no name"), num(0){}
    void setAnimal(string arr,int n)
    {
        name=arr; num=n;
    }
    int getNum() const{return num;}
    string getName() const{return name;}
    Animal &operator=(Animal &p)
    {
        name=p.name; num=p.num;
    }
};
class AnimalList
{
public :
    Animal *animalList;
    int numOfAnimal;
    AnimalList(Animal *animals, int n):numOfAnimal(n)
    {
        animalList=new Animal[numOfAnimal];
        for(int i=0; i<n; i++)
        animalList[i]=animals[i];
    }
    int  operator[](string name_)
    {
        for(int i=0; i<numOfAnimal; i++)
        {
            if(animalList[i].name==name_)
                return animalList[i].num;
        }
        return -1;
    }
    ~AnimalList(){delete []animalList;}
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
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1272 kb
****************************************************************/

