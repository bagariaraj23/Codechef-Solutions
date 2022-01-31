#include<iostream>
#include<string>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        int N , A, B;
        cin>>N>>A>>B;
        string S;
        cin>>S ;
        int time1 = 0, time2= 0, time =0;;
        // cout<<S;
        for (int i = 0; i < N; i++)
        {
            if(S[i] == '0')
            {
                time1 = time1 +A;
            }
            else if(S[i]== '1')
            {
                time2 = time2 + B;
            }
        }
        time = time1+ time2;
        cout<<time<<endl;       

        T--;
    }
    return 0;
}
