#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

#define lli long long int
#define enndl "\n"

int main()
{
    lli T;
    cin>>T;
    while(T--)
    {
        lli A1 , A2;
        lli B1 , B2;
        lli C1 , C2;
        cin>>A1>>A2>>B1>>B2>>C1>>C2;

        lli sum1 = 0, sum2 = 0, sum3 = 0;
        sum1 = A1+A2;
        sum2 = B1+B2;
        sum3 = C1+C2; 
        lli ans = max(sum1 , max(sum2 , sum3));

        cout<<ans<<endl; 
    }

    return 0;

}
