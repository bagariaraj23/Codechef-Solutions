#include <iostream>
#include <bits/stdc++.h>

#define lli long long int

using namespace std;

int main()
{
    lli t;
    cin >> t;
    while (t--)
    {
        lli N;
        cin >> N;
        lli num;

        num = N + 1;
        lli div = 0;

        // div = floor(log2(N));
        
        while (num > 1)
        {
            num = num / 2;
            div++;
        }
        // cout << div << endl;
        lli ans = pow(2, div);
        cout << ans << endl;
    }
    return 0;
}
