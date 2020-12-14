#include <iostream>
#include <iomanip>

using namespace std;

template<class T>
class Data{
    friend Data<T> operator+(const Data<T>& a, const Data<T>& b){
        return Data<T>(a.value+b.value);
    }
    friend ostream& operator<<(ostream& os,const Data<T>& a){
        os<<setprecision(2)<<fixed<<a.value;
        return os;
    }
private:
    T value;
public:
    Data() : value(0){}
    Data(T v) : value(v){}
    T getValue() const {return value;}
    bool operator>(const Data<T>& a){
        if(value > a.value) return true;
        return false;
    }
    bool operator<(const Data<T>& a){
        if(value < a.value) return true;
        return false;
    }
    void setValue(const T& n) {value = n;}
};
template<class T>
class GetResult{
public:
    static Data<T> getSum(Data<T> *arr, int num){
        T sum = 0;
        for(int i=0; i<num; ++i) {
            sum += arr[i].getValue();
        }
        return Data<T>(sum);
    }
    static Data<T> getMax(Data<T> *arr, int num) {
        T max = arr[0].getValue();
        for(int i=1; i<num; ++i)
            if(arr[i].getValue() > max) max = arr[i].getValue();
        return Data<T>(max);
    }
    static Data<T> getMin(Data<T> *arr, int num) {
        T min = arr[0].getValue();
        for(int i=1; i<num; ++i) {
            if(arr[i].getValue() < min) min = arr[i].getValue();
        }
        return Data<T>(min);
    }
};
int main()
{
    Data<int> iData[1001];
    Data<double> dData[1001];
    int cases, num;
    char ch;
    int u;
    double v;
    Data<int> a(10), b(20);
    Data<double> c(3.14), d(-4.1);
    cout<<"a + b = "<<(a + b)<<endl;
    cout<<"max(a, b) = "<<(a > b ? a : b)<<endl;
    cout<<"min(a, b) = "<<(a < b ? a : b)<<endl;
    cout<<"c + d = "<<(c + d)<<endl;
    cout<<"max(c, d) = "<<(c > d ? c : d)<<endl;
    cout<<"min(c, d) = "<<(c < d ? c : d)<<endl;
    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
        cin>>ch;
        cin>>num;
        for (int j = 0; j < num; j++)
        {
            if (ch == 'i')
            {
                cin>>u;
                iData[j].setValue(u);
            }
            else if (ch == 'd')
            {
                cin>>v;
                dData[j].setValue(v);
            }
        }
        if (ch == 'i')
        {
            cout<<GetResult<int>::getMax(iData, num);
            cout<<" "<<GetResult<int>::getMin(iData, num);
            cout<<" "<<GetResult<int>::getSum(iData, num)<<endl;
        }
        else if (ch == 'd')
        {
            cout<<GetResult<double>::getMax(dData, num);
            cout<<" "<<GetResult<double>::getMin(dData, num);
            cout<<" "<<GetResult<double>::getSum(dData, num)<<endl;
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1788
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

