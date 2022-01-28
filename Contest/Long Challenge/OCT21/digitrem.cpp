#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    long long int T;
    cin >> T;
    while (T--)
    {
        string N;
        cin >> N;
        string D;
        cin >> D;

        long long int num = stoi(N);
        long long int num1 = num;

        N = to_string(num);

        long long int l, index;
        long long int newlength ;
        long long int newindex = 0;

        index = N.find(D) + 1;
        newindex = index;
        // cout<<index<<endl;

        l = N.length();
        newlength = l;
        // cout<<l<<endl;

        long long int faceval = 0;
        long long int op = 0;
        long long int diff, ans;
        long long int finans;

        if (index == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            while (newindex != 0)
            {
                newlength = N.length();
                num = stoi(N);
                faceval = pow(10, (l - newindex));
                // cout<<faceval<<endl ;
                op = fmod(num, faceval);
                // cout<<op<<endl;
                diff = num - op;
                // cout<<diff<<endl;
                ans = diff + faceval;
                // cout<<ans<<endl;
              
                N = to_string(ans);
                
                N.erase((l),8);
              
                newindex = N.find(D)+1;
                num = stoi(N);
                
            }
            finans = ans - num1;
            cout<<finans<<endl;
        }
    }
    return 0;
}
