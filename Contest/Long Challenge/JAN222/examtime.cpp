#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define lli long long int
#define endl "\n"

int main()
{
    lli T;
    cin >> T;
    while (T--)
    {

        lli ad, bd, cd;
        cin >> ad >> bd >> cd;

        lli as, bs, cs;
        cin >> as >> bs >> cs;

        lli sum1 = 0;
        lli sum2 = 0;

        sum1 = ad + bd + cd;
        sum2 = as + bs + cs;

        if (sum1 > sum2)
        {
            cout << "Dragon" << endl;
        }
        else if (sum1 < sum2)
        {
            cout << "Sloth" << endl;
        }

        else if (sum1 == sum2 && ad != as)
        {
            if (ad > as)
            {
                cout << "Dragon" << endl;
            }
            else if (ad < as)
            {
                cout << "Sloth" << endl;
            }
        }
        else if (sum1 == sum2 && ad == as)
        {
            if (bd > bs)
            {
                cout << "Dragon" << endl;
            }
            else if (bd < bs)
            {
                cout << "Sloth" << endl;
            }
            else
            {
                cout << "Tie" << endl;
            }
        }
    }

    return 0;
}
