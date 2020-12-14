#include <iostream>
using namespace std;
class MyList
{
public:
    int *elements,len,curLen;
    MyList(int _len)
    {
        curLen=0;
        len=_len;
        elements=new int[len+1];
    }
    void append(int d)
    {
        curLen++;
        elements[curLen-1]=d;
    }
    void insert(int p,int d)
    {
        int i,j;
        curLen++;
        for(i = 0; i<curLen-1; i++)
        {
            if(p==i)
            {
                for(j=curLen-1; j>=p+1; j--)
                {
                    elements[j] = elements[j-1];
                }
                elements[i] = d;
            }
        }
    }
    void erase(int p)
    {
        for (int i=0; i<curLen; i++)
        {
            if(i<p)
                elements[i]=elements[i];
            else
                elements[i]=elements[i+1];
        }
        curLen--;
    }
    void set(int p, int d)
    {
        elements[p]=d;
    }
    void show()
    {
        int i;
        for(i=0; i<curLen-1; i++)
            cout<<elements[i]<<" ";
        cout<<elements[i]<<endl;
    }
    ~MyList()
    {
        delete[] elements;
    }
};
int main()
{
    int cases, len, data, pos;
    char op;
    cin>>len;
    MyList myList(len);
    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
        cin>>op;
        switch (op)
        {
        case 'A':
            cin>>data;
            myList.append(data);
            break;
        case 'I':
            cin>>pos>>data;
            myList.insert(pos, data);
            break;
        case 'E':
            cin>>pos;
            myList.erase(pos);
            break;
        case 'S':
            cin>>pos>>data;
            myList.set(pos, data);
        }
        myList.show();
    }
    return 0;
}
/**************************************************************
	Problem: 1828
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

