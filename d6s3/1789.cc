#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class DataVector {
private:
    vector<T> members;

public:
    void show()
    {
        for (typename vector<T>::iterator i = members.begin(); i != members.end(); i++) {
            if (i != members.begin())
                cout << " ";
            cout << *i;
        }
        cout << endl;
    }
    T getSum()
    {
        T sum = 0;
        for (typename vector<T>::iterator i = members.begin(); i != members.end(); i++) {
            sum += *i;
        }
        return sum;
    }
    void clearVector()
    {
        members.clear();
    }
    vector<T>& getVector()
    {
        return members;
    }
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
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1280 kb
****************************************************************/

