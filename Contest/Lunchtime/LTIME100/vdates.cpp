#include<iostream>
using namespace std;

int main()
{
    int T;
    cin >>T;
    while(T--)
    {
        int D, L , R;
        cin>>D>>L>>R;
        if(D >= L && D <= R)
        {
            cout<<"Take second dose now"<<endl;
        }
        else if(D>R)
        {
            cout<<"Too Late"<<endl;
        }
        else if(D<L)
        {
            cout<<"Too Early"<<endl;
        }
    }
    return 0;
}
