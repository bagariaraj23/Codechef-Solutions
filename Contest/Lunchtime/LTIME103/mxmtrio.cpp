#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int N;
        cin>>N;

        long long int arr[N];
        for (long long int i = 0; i < N; i++)
        {
            cin>>arr[i];
        }

        sort(arr, arr+N);
        long long int ans = 0;

        ans = (arr[N-1]-arr[0])*arr[N-2];
        
        cout<<ans<<endl;
    }

    return 0;
}
