#include<iostream>
#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int

using namespace std;

int main()
{
    lli T;
    cin>>T;
    while(T--)
    {
        lli N;
        cin>>N;

        lli arr[N];
        lli a = 3;
        lli b = 4;

        for (lli i = 0; i < N; i++)
        {
            if(i%2 == 0)
            {
                arr[i] = a;
                a= a+4;
            }
            else
            {
                arr[i] = b;
                b = b+4;
            }
        }

        for (lli i = 0; i < N; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;        
    }
    return 0;
}
