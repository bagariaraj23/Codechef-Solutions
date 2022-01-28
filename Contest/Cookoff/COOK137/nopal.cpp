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
        string s = "";

        char j = 97;
        for (lli i = 0; i < N; i++)
        {
            s = s+j;
            j++;
            if(j > 122)
            {
                j = 97;
            }
        }
        cout<<s<<endl;
        
    }
    return 0;
}
