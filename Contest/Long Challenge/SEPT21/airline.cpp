#include<iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        int A , B , C, D, E;
        cin>>A>>B>>C>>D>>E;
        
        if(A+B <= D && C<=E || B+C<=D && A<=E || A+C <= D && B<=E )
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
        T--;
    }
    return 0;
}
