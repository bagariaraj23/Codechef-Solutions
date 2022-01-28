#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    int k = 0;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int flag = N;

        while(N>1)
        {
        N = N/2;
        k++;
        }
        int p1, p2;
        p1 = (flag-(pow(2,k)))+1;
        p2 = (pow(2,k) - pow(2,(k-1)));

        cout<<max(p1,p2)<<endl;
        k = 0;
    }

}
