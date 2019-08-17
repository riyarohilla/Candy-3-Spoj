#include <iostream>
using namespace std;

int main() {
	
	// your code here
	long long int t,n,i;
	cin>>t;
	while(t--)
	{
		cout<<endl;
		cin>>n;
		long long int a[n],sum=0;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			sum=(sum+a[i])%n;
			
		}
		if(sum==0)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
		
	}

	return 0;
}
