#include <cctype>
#include <cstring>
#include <iostream>
using namespace std;

class Integer {
private:
    int n_;

public:
    Integer(int n)
        : n_(n)
    {
    }
    Integer(char n[], int j)
    {
        int t = 0, f = 1;
        for (int i = 0; i < strlen(n); i++) {
            if (n[i] == '-') {
                f = -1;
                continue;
            } else if (isupper(n[i]))
                n[i] = tolower(n[i]);
            if (isalnum(n[i])) {
                t *= j;
                if (isdigit(n[i]))
                    t += (n[i] - '0');
                else
                    t += (n[i] - 'a' + 10);
            }
        }
        n_ = t * f;
    }
    int getValue()
    {
        return n_;
    }
};
int main()
{
    char str[100];
    int numOfData, numOfStr;
    int data, i, radix;
    
    cin>>numOfData;
    for (i = 0; i < numOfData; i++){
        cin>>data;
        Integer anInteger(data);
        cout<<anInteger.getValue()<<endl;
    }

    cin>>numOfStr;
    for (i = 0; i < numOfStr; i++){
        cin>>str>>radix;
        Integer anInteger(str,radix);
        cout<<anInteger.getValue()<<endl;
    }
    return 0;
}
/**************************************************************
	Problem: 1773
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

