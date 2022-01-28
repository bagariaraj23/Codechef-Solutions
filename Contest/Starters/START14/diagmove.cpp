#include<iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int x , y;
        cin>>x>>y;
        // int i =0 , j = 0 ;
        // int o1 = i+1, o2 = i-1;
        // int p1 = j+1, p2 = j-1;

        // if(i+o1 == x && j+p1 == y)
        // {

        // }
        if(x-y == 1 || y-x == 1)
        {
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}