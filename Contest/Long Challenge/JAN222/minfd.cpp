#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

#define lli long long int
#define endl "\n"

int main()
{
    int T;
    cin>>T;
    while (T--)
    {
        lli N, X;
        cin>>N>>X;

        lli arr[N];
        for (lli i = 0; i < N; i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr+N);
        
        lli sum = 0;
        lli count = 0;
        lli flag = 0;
        for (lli i = N-1; i >= 0; i--)
        {
            sum = sum + arr[i];
            count++;
            if(sum >= X)
            {
                // cout<<count<<endl;
                flag = 1;
                break;
            }
        }
        if(flag == 1)
        {
            cout<<count<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
    return 0;
    
}
