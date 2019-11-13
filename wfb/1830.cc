#include <iostream>
#include <vector>

using namespace std;

class MaxValue{
public:
    void append(int x){
        if(x) {
            elements.push_back(x);
        }
    }
    int getMax() {
        int max = *elements.begin();
        for(ite=elements.begin(); ite!=elements.end(); ++ite){
            if(*ite > max) max = *ite;
        }
        return max;
    }
private:
    vector<int> elements;
    vector<int>::iterator ite;
};
int main()
{
    int a;
    MaxValue test;
    cin>>a;
    while (a != 0)
    {
        test.append(a);
        cin>>a;
    }
    cout<<test.getMax()<<endl;
    return 0;
}

/**************************************************************
	Problem: 1830
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1272 kb
****************************************************************/

