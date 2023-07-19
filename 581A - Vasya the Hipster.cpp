#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,b;
    cin>>r>>b;
    int cd=min(r,b);
    int cs=max((r-cd)/2,(b-cd)/2);
    cout<<cd<<" "<<cs;
    cout<<endl;
}
