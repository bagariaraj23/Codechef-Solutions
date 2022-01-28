#include<iostream>
#include<bits/stdc++.h>
#define lli long long int
#define endl "\n"

using namespace std;

int main()
{
    lli T;
    cin>>T;
    while(T--)
    {
        lli N, A;
        cin>>N>>A;

        lli compute = N-A;
        

        if(compute<A)
        {
            cout<<compute<<endl;
        }
        else{
            cout<<A<<endl;
        }
    }
    return 0;
}
