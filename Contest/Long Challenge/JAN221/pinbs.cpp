#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        string S;
        cin>>S;

        long long int k = 0;
        long long int l = S.length();
        // cout<<l<<endl;
        for (long long int i = 0; i < l; i++)
        {
            if(S[i] == '0')
            {
                k++;
            }
        // cout<<"k after index "<<i<<" is "<<k<<endl;
        }
        if(k == l)
            {
                cout<<"NO"<<endl;
            }
            else if ( k == (l-1) && S[l-1] == '1')
            {
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        
        // cout<<s<<endl;
    }
    return 0;
}
