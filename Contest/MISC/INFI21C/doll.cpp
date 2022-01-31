#include<iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N , K;
        cin>>N>>K;

        int arr[N];

        int count =0;
        for (int i = 0; i < N; i++)
        {
            cin>>arr[i];
        }

        for (int i = 0; i < N; i++)
        {
           if(arr[i] > K)
            {
                count++;
            }
        }

        cout<<count<<endl;
    }
    return 0;
}
