#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin>>T;

    while(T--)
    {
        int N;
        cin>>N;

        string S;
        cin>>S;

        int count0 = 0;
        int count1 = 0;
        int count = 0;

        sort(S.begin(),S.end());

        for (int i = 0; i < N; i++)
        {
            if(S[i] == '1')
            {
                count1++;
            }
            if(S[i] == '0')
            {
                count0++;
            }
        }
        
        count = min(count0,count1);
        if(count == 0)
        {
            cout<<"0"<<endl;
        }
        else{
            cout<<(count-1)<<endl;
        }
    }
    return 0;
}
