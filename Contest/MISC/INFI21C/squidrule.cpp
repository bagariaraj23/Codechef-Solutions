#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int arr[N];
        int sum = 0;
        for (int i = 0; i < N; i++)
        {
            cin>>arr[i];
        }

        sort(arr , arr+N);

        for (int i = 1; i < N; i++)
        {
            sum = sum +arr[i];
        }
        
        cout<<sum<<endl;
    }

    return 0;
}
