#include<iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int k = 1;

        for(int i = 0; i < n; i++)
        {
            cout<<k<<" ";
            k= k+2;
        }
        cout<<endl;
    }
    return 0;
}
