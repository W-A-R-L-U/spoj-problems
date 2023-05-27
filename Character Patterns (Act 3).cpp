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
		for(int i=0;i<row*3+1;i++)
		{
			for(int j=0;j<col*3+1;j++)
			{
				if(i%3==0) cout<<"*";
				else
				{
					if(j%3==0) cout<<"*";
					else cout<<".";
				}
			}
			cout<<endl;
		}
	}
	return 0;
}
