#include <bits/stdc++.h>

using namespace std;

template <typename T>
class DataVector
{
private:
    vector<T> v;//表示该数组中的所有元素
public:
    void show()//用于显示所有元素。
    {
        int flag=0;
        int l=v.size();
        for(int i=0;i<l;++i)
        {
            if(flag==0) cout<<v[i];
            else cout<<" "<<v[i];
            flag=1;
        }
        cout<<endl;
    }
    T getSum()//用于求所有元素的和。
    {
        T sum=0;
         int l=v.size();
        for(int i=0;i<l;++i)
        {
            sum+=v[i];
        }
        return sum;
    }
    void clearVector()//用以清除所有元素。
    {
        v.clear();
    }
    vector<T>& getVector()//用于返回members。
    {
        return v;
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
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1276 kb
****************************************************************/

