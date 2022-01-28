#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main()
{
    int T;
    cin>>T;

    while(T--)
    {
        int N , D;
        cin>>N>>D;

        long long int inf = 1;
        
            for (long long int i = 1; i <= D; i++)
            {
                if(i <= 10)
                {
                    inf = inf*2;
                }
                else if(i >= 11)
                {
                    inf = inf*3;
                }
                if(inf > N)
                {
                    // cout<<N<<endl;
                    inf = N;
                    break;
                }
            }

        cout<<inf<<endl;
    }
    return 0;
}
