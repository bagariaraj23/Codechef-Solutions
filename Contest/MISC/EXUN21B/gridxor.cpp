#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

#define endl "\n"
#define lli long long int

int main()
{
    lli T;
    cin>>T;

    while(T--)
    {
        lli N;
        cin>>N;

        lli arr[N][N];
        for (lli i = 0; i < N; i++)
        {
            for (lli j = 0; j < N; j++)
            {
                arr[i][j] = 1;
            }
        }

        // arr[N-1][N-1] = 1;

        for (lli i = 0; i < N; i++)
        {
            for (lli j = 0; j < N; j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
