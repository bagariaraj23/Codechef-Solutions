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
        int X, Y, A, B, K;
        cin>>X>>Y>>A>>B>>K;

        int p = (X + (K*A));
        int d = (Y + (K*B));

        if(p == d)
        {
            cout<<"SAME PRICE"<<endl;
        }
        else if(p >d)
        {
            cout<<"DIESEL"<<endl;
        }
        else if(p < d)
        {
            cout<<"PETROL"<<endl;
        }
    }
    return 0;
}
