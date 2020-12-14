#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n )
    {
        stack<double> st;
        double sum=0;
        double nn;
        char c;
        for(int i=0;i<n;++i)
        {

            if(i==0)
            {
                cin>>nn>>c;
                st.push(nn);
            }
            else
            {
                if(c=='-')
                {
                    cin>>nn>>c;
                    st.push(-nn);
                }
                else if(c=='*')
                {
                    cin>>nn>>c;
                    double temp;
                    temp=st.top();
                    st.pop();
                    temp=temp*nn;
                    st.push(temp);
                }
                else
                {
                        cin>>nn>>c;
                        st.push(nn);
                }
            }

        }
        while(!st.empty())
            {
                double temp;
                temp=st.top();
                st.pop();
                sum=sum+temp;
            }
            cout<<fixed<<setprecision(2)<<sum<<endl;
    }
    return 0;
}

/**************************************************************
	Problem: 1351
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1276 kb
****************************************************************/

