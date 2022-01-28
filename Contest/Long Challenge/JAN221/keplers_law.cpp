#include<iostream>
#include<math.h>
#include<algorithm>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        double T1, T2, R1, R2;
        cin>>T1>>T2>>R1>>R2;

        double comp1 = 0;
        double comp2 = 0;

        comp1 = (double)((pow(T1,2))/(pow(R1,3))); 
        comp2 = (double)((pow(T2,2))/(pow(R2,3)));

        // cout<<comp1<<endl<<comp2<<endl;

        if(comp1 == comp2)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
        return 0;
}
