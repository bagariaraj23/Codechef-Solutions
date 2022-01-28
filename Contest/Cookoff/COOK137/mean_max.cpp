#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>

#define lli long long int
#define endl "\n"

using namespace std;

int main()
{
    lli T;
    cin>>T;
    while(T--)
    {
    float c=0,sum=0;
    long long int n;
    cin>>n;
    float ans=0;
    long long int  a[n];
    for(int i=0;i<n;i++)
    {    
       cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n-1;i++)
    {
       sum+=a[i];
       c++;
    }
    ans=a[n-1]+(sum/c);
    std::cout<<std::fixed;
    std::cout<<std::setprecision(6);
    cout<<(ans)<<"\n";
}
    return 0;
}
