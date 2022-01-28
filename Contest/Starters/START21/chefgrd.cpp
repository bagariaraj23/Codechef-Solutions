#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int N , X , Y;
        cin>>N>>X>>Y;

        long long int cx , cy;

        cx = (X+1)/2;
        cy = (Y+1)/2;

        if((X+Y)%2 == 0)
        {
            cout<<0<<endl;
        } 
        else{
            cout<<1<<endl;
        }
    }
return 0;
}
