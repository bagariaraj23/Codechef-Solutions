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
        lli a, b;
        cin>>a>>b;

        lli sum = a+b;
        if(sum%2 == 0)
        {
            cout<<"Bob"<<endl;
        }
        else
        {
            cout<<"Alice"<<endl;
        }
    }
    return 0;
}
