#include<iostream>
using namespace std;
class Test
{
public:
    //构造函数
    Test(int i = 0){
        num = i;
        cout<<"Test "<< num <<" is created."<<endl;
    }
    //析构函数
    ~Test(void){
        cout<<"Test "<<num<<" is erased."<<endl;
    }
    int getMem(){
        return num;
    }
    void setMem(int m){
    this->num = m;
    }
private:
    int num;
};
int main()
{
    Test t1;
    int i;
    cin>>i;

    Test t2(i);
    cout<<"t2 is "<<t2.getMem()<<"."<<endl;
    cin>>i;
    t2.setMem(i);
    cout<<"t2 is "<<t2.getMem()<<"."<<endl;
    return 0;
}
/**************************************************************
	Problem: 2194
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

