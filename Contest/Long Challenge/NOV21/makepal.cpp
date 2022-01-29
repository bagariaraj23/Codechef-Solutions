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
        int  N,k = 0;
        cin>>N;
        int arr[N];

        for (int i = 0; i < N; i++)
        {
            cin>>arr[i];
        }

        for (int i = 0; i < N; i++)
        {
            if(arr[i]%2 != 0)
            {
                k++;
            }
        }

        int ans = k/2;
        cout<<ans<<endl;
        
    }
    return 0;
}
