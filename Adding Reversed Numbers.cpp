#include <iostream>
using namespace std;
 
int main() {
	string ct;
	cin>>ct;
	for(int t=stoi(ct);t>0;t--)
	{
		string s1,s2;
		cin>>s1>>s2;
		string sol="";
		int l1=s1.length(),l2=s2.length(),carry=0,i=0,j=0;
		while(i<l1 && j<l2)
		{
			int val=(s1[i]-'0')+(s2[j]-'0')+carry;
			if(val>9) carry=1;
			else carry=0;
			sol+=to_string(val%10);
			i++;
			j++;
		}
		while(i<l1)
		{
			int val=(s1[i]-'0')+carry;
			if(val>9) carry=1;
			else carry=0;
			sol+=to_string(val%10);
			i++;
		}
		while(j<l2)
		{
			int val=(s2[j]-'0')+carry;
			if(val>9) carry=1;
			else carry=0;
			sol+=to_string(val%10);
			j++;
		}
		if(carry) sol+=to_string(1);
		int l3=sol.length(),k=0;
		while(k<l3 && sol[k]=='0') k++;
		cout<<sol.substr(k,l3-k);
		cout<<endl;
	}
	return 0;
} 
