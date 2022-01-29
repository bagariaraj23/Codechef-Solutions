#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int X, Y;
        cin>>X>>Y;

        string s;
        cin>>s;
        int k = 0;
        int count = 0;
        int maxn = 0;

        for (int i = 0; i < 30; i++)
        {
            if(s[i]== '1')
            {
                k++;
            }
        }

        for (int i = 0; i < 30; i++)
        {
            if (s[i] == '1')
            {
                count++;
                maxn = max(maxn , count);
            }
            else
            {
                count = 0;
            }
            
        }
        
        int ans = (k*X)+(maxn*Y);

        
        cout<<ans<<endl;

        // cout<<maxn<<endl<<count<<endl;
    }
    return 0;
}
