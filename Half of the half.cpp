#include <iostream>
using namespace std;

int main() {
	string testcase;
	cin>>testcase;
	for(int i=stoi(testcase);i>0;i--)
	{
		string str;
		cin>>str;
		for(int i=0;i<str.length()/2;i++)
		{
			if(i%2==0) cout<<str[i];
		}
		cout<<endl;
	}
	return 0;
}
