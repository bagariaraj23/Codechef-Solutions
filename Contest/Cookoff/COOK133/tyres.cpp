#include<iostream>
using namespace std ;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int rem , div;
        rem = N%4;
        div = N/4;
        // int diff = N - (*div);
        // cout<<diff<<endl;

        if(rem == 0)
        {
            cout<<"NO"<<endl;
        }
        else if(rem/2 >= 1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
        // else if (N%4 > 2)
        // {
            // if()
        // }
    }
    return 0;
}
