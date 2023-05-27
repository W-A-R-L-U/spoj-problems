#include <iostream>
using namespace std;

int main() {
	string testcases;
	cin>>testcases;
	for(int t=stoi(testcases);t>0;t--)
	{
		int row;
		int col;
		cin>>row;
		cin>>col;
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				if(i==0 || i==row-1) cout<<"*";
				else
				{
					if(j==0 || j==col-1) cout<<"*";
					else cout<<".";
				}
			}
			cout<<endl;
		}
	}
	return 0;
}
