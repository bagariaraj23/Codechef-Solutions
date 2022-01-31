#include<iostream>
using namespace std;

#define lli long long int
#define endl "\n"

int main()
{
	lli T;
	cin>>T;
	while(T--)
	{
		lli N;
		cin>>N;
		lli arr1[3], arr2[3], arr3[3];
		for(lli i = 0; i < 3; i++)
		{
			cin>>arr1[i];
		}
		for(lli i = 0; i < 3; i++)
		{
			cin>>arr2[i];
		}
		for(lli i = 0; i < 3; i++)
		{
			cin>>arr3[i];
		}

		lli sum1 = arr1[1]+arr1[2]+arr2[2];
		lli sum2 = arr2[0]+arr3[0]+arr3[1];
		lli ans = max(sum1, sum2);
		cout<<ans<<endl;
	}
	return 0;
}
