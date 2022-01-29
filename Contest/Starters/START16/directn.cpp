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
        int N;
        cin>>N;
        string s;
        cin>>s;

        int K = 0;

        for (int i = 0; i < N-1; i++)
        {
            if((s[i] == 'R' && s[i+1] == 'R') || (s[i] == 'L' && s[i+1] == 'L'))
            {
                // cout<<"YES"<<endl;
                K++;
            }
        }
        // cout<<K<<endl;
        
            if (K != 0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
    
    }
    return 0;
}
