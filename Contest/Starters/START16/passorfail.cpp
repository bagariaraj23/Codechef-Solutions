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
        int N , X , P;
        cin>>N>>X>>P;

        lli ans = 0;
        ans = (X*3) - ((N-X)*1);

        if(ans >= P)
        {
            cout<<"PASS"<<endl;
        }
        else
        {
            cout<<"FAIL"<<endl;
        }
    }
    return 0;
}
