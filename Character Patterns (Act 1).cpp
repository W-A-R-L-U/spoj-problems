#include <iostream>
using namespace std;

int main() {
	string testcses;
	cin>>testcses;
	for(int i=stoi(testcses);i>0;i--)
	{
		int row;
		int col;
		cin>>row;
		cin>>col;
		for(int j=0;j<row;j++)
		{
			for(int k=0;k<col;k++)
			{
				if(j%2==0)
				{
					if(k%2==0) cout<<"*";
					else cout<<".";
				}
				else
				{
					if(k%2!=0) cout<<"*";
					else cout<<".";
				}
			}
			cout<<endl;
		}
	}
	return 0;
}
