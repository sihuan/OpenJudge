#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

template <typename T>
class DataVector
{
private:
    vector<T> members;//表示该数组中的所有元素
    typename vector<T>::iterator ite;
public:
    DataVector(){}
    void show(){
        for(ite = members.begin(); ite!=members.end(); ++ite){
            if(ite != members.begin()) cout<<" ";
            cout<<*ite;
        }
        cout<<endl;
    }//用于显示所有元素。
    T getSum(){
        T sum = 0;
        for(ite = members.begin(); ite!=members.end(); ++ite){
            sum += *ite;
        }
        return sum;
    }//用于求所有元素的和。
    void clearVector() {
        members.clear();
    }//用以清除所有元素。
    vector<T>& getVector(){return members;}//用于返回members。
};
int main()
{
    int cases, num, iData;
    double dData;
    DataVector<int> iVector;
    DataVector<double> dVector;
    char type;
    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
        cin>>type;
        switch(type)
        {
        case 'i':
            iVector.clearVector();
            cin>>num;
            for (int j = 0; j < num; j++)
            {
                cin>>iData;
                iVector.getVector().push_back(iData);
            }
            iVector.show();
            cout<<iVector.getSum()<<endl;
            break;
        case 'd':
            dVector.clearVector();
            cin>>num;
            for (int j = 0; j < num; j++)
            {
                cin>>dData;
                dVector.getVector().push_back(dData);
            }
            dVector.show();
            cout<<setprecision(2)<<fixed<<dVector.getSum()<<endl;
        }
    }
    return 0;
}
/**************************************************************
	Problem: 1789
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1280 kb
****************************************************************/

