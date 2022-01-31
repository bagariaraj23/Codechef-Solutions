#include<iostream>
#include<algorithm>
#include<math.h>

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
        for (int i = 0; i < N; i++)
        {
            cin>>arr[i];
        }

        int even = 0 ;
        for (int i = 0; i < N; i++)
        {
            if(arr[i]%2 == 0)
            {
                even++;
            }
        }

        int k = 0;
        //array 1 for storing even numbers of length even
        int arr1[even];
        for (int i = 0; i < N; i++)
        {
            if(arr[i] % 2 == 0 )
            {
                arr1[k] = arr[i];
                k++;
            }
        }
        k =0;

        int odd= (N-even);
        
        //array2 for saving only odd numbers of length (N-even)
        int arr2[odd];
        for (int i = 0; i < N; i++)
        {
            if(arr[i] % 2 != 0 )
            {
                arr2[k] = arr[i];
                k++;
            }
        }

        
        int flag1 = 0, flag2 = 0;
        for (int i = 1; i <= N; i++)
        {
            if((i%2 == 0 && odd>0)||(even==0))
            {
                arr[i-1] = arr2[flag1];
                flag1++;
                odd--;   
            }
            else if(even>0 ||(odd==0))
            {
                arr[i-1] = arr1[flag2];
                flag2++;
                even--;
            }    
        }
        int ans = 0;
        for (int i = 1; i <= N; i++)
        {   
            ans = (ans + ((arr[i-1]+i)%2));
        }
        cout<<ans<<endl;
   
    }
    return 0;
}
