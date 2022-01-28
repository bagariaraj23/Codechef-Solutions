#include<iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N, A , B , C ;
        cin>>N>>A>>B>>C;
    
        int d1 = 0 ;
        int d2 = 0 ;

        int min1 = min(A, B);
        int max1 = max(A, B);

            while(min1 <= max1 && min1 > 0)
            {
                d1++;
                min1--;
                max1--;
                B--;
                A--;
            }

        int min2 = min(B , C);
        int max2 = max(B , C);
        
            while(min2 <= max2 && min2 > 0)
            {
                d2++;
                min2--;
                max2--;
                B--;
                C--;
            }
 
        if(d1 + d2 >= N)
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
