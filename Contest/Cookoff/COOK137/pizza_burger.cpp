#include<iostream>
#include<bits/stdc++.h>

#define endl "\n"
#define lli long long int

using namespace std;

int main()
{
    lli T;
    cin>>T;
    while(T--)
    {
        lli X, Y, Z;
        cin>>X>>Y>>Z;

        if(Y <= X)
        {
            cout<<"PIZZA"<<endl;
        }
        else if(Y > X && Z <= X)
        {
            cout<<"BURGER"<<endl;
        }
        else if(X < Y && X < Z)
        {
            cout<<"NOTHING"<<endl;
        }
    }
    return 0;
}
