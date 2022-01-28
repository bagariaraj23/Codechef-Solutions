#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int operate(int n)
{
    double x;
    x = (double)(n / 2);
    x = (double)(floor(x));
    return x;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;
        int arr[N];
        int count = 0;
        int oddarr[N], evenarr[N];
        int j = 0, k = 0;
        int even = 0, odd = 0;

        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < N; i++)
        {

            // arr[i] = operate(arr[i]);
            if (arr[i] % 2 != 0)
            {
                oddarr[j] = arr[i];
                odd++;
                j++;
            }
            else
            {
                evenarr[k] = arr[i];
                even++;
                k++;
            }
        }
        k = 0;
        j = 0;

        // cout<<odd<<even<<endl;

        for (int i = 0; i < odd; i++)
        {
            arr[i] = oddarr[i];
            // cout<<arr[i]<<" ";
        }
        // cout<<endl;

        for (int i = 0; i < even; i++)
        {
            arr[odd] = evenarr[k];
            // cout<<arr[odd]<<" ";
            odd++;
            k++;
        }
        // cout<<endl;

        int fincnt = 0;
        // count - to store odd numbers
        while (count == 0)
        {
            for (int i = 0; i < N; i++)
            {
                // cout<<arr[i]<<" ";
                if (arr[i] % 2 != 0)
                {
                    count++;
                    // cout<<count<<endl;
                    // break;
                }
            }
            // cout<<count<<endl;

            if (count != 0)
            {
                cout << fincnt << endl;
                break;
            }
            else
            {
                for (int i = 0; i < N; i++)
                {
                    arr[i] = operate(arr[i]);
                    // fincnt++;
                    // cout<<arr[i]<<" ";
                }
                fincnt++;
            }
            // cout<<fincnt<<endl;
            count = 0;
        }

    }
return 0;
}
