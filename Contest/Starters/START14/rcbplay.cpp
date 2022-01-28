#include<iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int X, Y , Z ;
        cin>>X>>Y>>Z;

        int maxpts, total;
        maxpts = Z*2;
        total= X + maxpts;
        if(total >= Y)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}