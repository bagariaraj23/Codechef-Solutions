#include<iostream>
#include<bits/stdc++.h>

using namespace std;

#define lli long long int
#define endl "\n"

int main()
{
    lli T;
    cin>>T;
    while(T--)
    {
        lli A, B, C;
        cin>>A>>B>>C;

        if(A > 50)
        {
            cout<<"A"<<endl;
        }
        else if (B > 50)
        {
            cout<<"B"<<endl;
        }
        else if (C > 50)
        {
            cout<<"C"<<endl;
        }
        else
        {
            cout<<"NOTA"<<endl;
        }      
    }
    return 0;
}
