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
        lli K;
        cin>>K;
        lli count = 0;
        lli card = 52;
        lli compute;

        while(card%K != 0)
        {
            count++;
            card--;
        }
        cout<<count<<endl;
    }
    return 0;
}
