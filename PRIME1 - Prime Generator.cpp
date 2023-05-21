#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int m,n;
		cin>>m>>n;
		for(int i=m;i<=n;i++)
		{
			int count=0;
			for(int j=2;j<=sqrt(i);j++)
			{
				if(i%j==0)
				{
					count++;
					break;
				}
			}
			if(count==0 && i!=1)
			{
				cout<<i<<endl;
			}
		}
	}
	return 0;
}
