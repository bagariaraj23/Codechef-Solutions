#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
bool isprime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
void solve()
{
   long long int n,a;
   cin>>n>>a;
   if(n==1)
   {
       if(a%2==0)
       {
           cout<<"Even"<<"\n";
       }
       else
       {
           cout<<"Odd"<<"\n";   
       }
   }
   else if(a%2==1)
   {
       if(n%2==0)
       {
           cout<<"Even"<<"\n";
       }
       else
       {
           cout<<"Odd"<<"\n";
       }
   }
   else
   {
       cout<<"Impossible"<<"\n";
   }

}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
