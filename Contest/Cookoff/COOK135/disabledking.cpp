#include<iostream>
#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <algorithm>
#include <string>

#define lli long long int
#define PI 3.14

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        lli N;
        cin>>N;

        // int ans = N-1;
        if((N-1)%2==0)
        {
            cout<<(N-1)<<endl;
        }
        else{
            cout<<N<<endl;
        }
    }
    return 0;
}
