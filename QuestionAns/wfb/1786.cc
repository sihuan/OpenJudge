#include <iostream>

using namespace std;

class Animal{
private:
    string name_;
    int  num_;
public:
    Animal() :name_(""),num_(0) {}
    void setAnimal(string name,int num){name_=name; num_=num;}
    int getNum() const{return num_;}
    string getName() const{return name_;}

};
class AnimalList{
private:
    Animal *animalList;
    int numOfAnimal;
public:
    AnimalList(Animal *animals, int n) : animalList(animals),numOfAnimal(n){}
    int operator[](string name) {
        for(int i=0; i<numOfAnimal; ++i) {
            if(this->animalList[i].getName() == name) {
                return this->animalList[i].getNum();
            }
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
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1272 kb
****************************************************************/

