#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

#define endl "\n"
#define lli long long int

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        lli N, K;
        cin >> N >> K;

        lli arr[N], brr[N], crr[N];
        lli flag = 0;
        lli fincnt = 0;
        for (lli i = 0; i < N; i++)
        {
            arr[i] = i + 1;
            brr[i] = i + 1;
            crr[i] = i + 1;
        }
        
        if((floor)(log2(N)) == (ceil)(log2(N)))
        {
            lli temp = (floor)(log2(N));
            lli compute = K%temp;
            // cout<<"compute is "<<compute<<endl;
            while(compute--)
            {
                lli k = 0;
                for (lli j = 0; j < N / 2; j++)
                {
                    brr[j] = arr[k];
                    k = k + 2;
                }
                k = 1;

                for (lli j = (N / 2); j < N; j++)
                {
                    brr[j] = arr[k];
                    k = k + 2;
                }
                // memcpy(arr, brr, sizeof(brr));
                for(lli i = 0; i < (N/2); i++)
                {
                    arr[i] = brr[i];
                }
                for(lli i = (N/2); i < N; i++)
                {
                    arr[i] = brr[i];
                }
            }
            for (long long int i = 0; i < N; i++)
            {
                cout << brr[i] << " ";
            }
            cout<<endl;
        }
        
        else
        {
            while (flag != 1)
            {
                lli k = 0;
                lli count = 0;
                for (lli j = 0; j < N / 2; j++)
                {
                    brr[j] = arr[k];
                    k = k + 2;
                }
                k = 1;

                for (lli j = (N / 2); j < N; j++)
                {
                    brr[j] = arr[k];
                    k = k + 2;
                }
                
                // memcpy(arr, brr, sizeof(brr));
                for(lli i = 0; i < (N/2); i++)
                {
                    arr[i] = brr[i];
                }
                for(lli i = (N/2); i < N; i++)
                {
                    arr[i] = brr[i];
                }

                for (lli i = 0; i < N; i++)
                {
                    if(brr[i] == crr[i])
                    {
                        count++;
                    }
                }
                fincnt++;
                if(count == N)
                {
                    flag = 1;
                    break;
                }
                if(fincnt == K)
                {
                    // K = fincnt
                    break;
                }
                // cout<<fincnt<<endl;
            }

            // cout<<"final count is "<<fincnt<<endl;
            if(fincnt == K)
            {
                K = fincnt;
            }
            else
            {
                K = (K%fincnt);
            }

            for (lli i = 0; i < N; i++)
            {
                arr[i] = crr[i];
                brr[i] = crr[i];
            }
        
            // cout<<"K is "<11<K<<endl;
            
            while (K--)
            {
                lli k = 0;
                for (lli j = 0; j < N / 2; j++)
                {
                    brr[j] = arr[k];
                    k = k + 2;
                }
                k = 1;

                for (lli j = (N / 2); j < N; j++)
                {
                    brr[j] = arr[k];
                    k = k + 2;
                }
                // memcpy(arr, brr, sizeof(brr));
                for(lli i = 0; i < (N/2); i++)
                {
                    arr[i] = brr[i];
                }
                for(lli i = (N/2); i < N; i++)
                {
                    arr[i] = brr[i];
                }
            }

            for (lli i = 0; i < N; i++)
            {
                cout << brr[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
