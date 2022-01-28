#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int Z , Y , A , B , C;
        cin>>Z>>Y>>A>>B>>C;

        if((Z-Y)>=(A+B+C))
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
