#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<algorithm>


using namespace std;

int main()
{
    long long int T;
    cin>>T;

    while(T--)
    {
        double N , M;
        cin>>N>>M;

        double a , b;
        a = (double)ceil(N/2);
        b = (double)ceil(M/2);

        double ans;
        ans = (double)a*b;

        cout<<ans<<endl;
    }
    return 0;
}
