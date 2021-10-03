#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int n,m,a[105],ans=0;
	
	cin>>n>>m;
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	sort(a,a+n);
	
	int s=a[n-1];
	
	if(s>=m)
		{
		ans++;
		}
	
	else
	{
		ans=1;
		int i=n-2;
		while(s<m&&i>=0)
		{
			s+=a[i];
			ans++;
			i--;
		}		
	}
	
	cout<<ans;
	
	return 0;
}
