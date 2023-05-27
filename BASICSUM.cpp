#include <iostream>
#include<vector>
using namespace std;

int main() {
	int num;
	cin>>num;
	int query;
	cin>>query;
	vector<int> numvec(num);
	for(int i=0;i<num;i++)
	{
		cin>>numvec[i];
	}
	int nums,start;
	for(int i=0;i<query;i++)
	{
		cin>>nums;
		cin>>start;
		int valsm=0;
		start-=1;
		start%=num;
		for(int i=0;i<nums;i++)
		{
			valsm+=numvec[start];
			start++;
			start=start%num;
		}
		cout<<valsm;
		cout<<endl;
	}
	return 0;
}
