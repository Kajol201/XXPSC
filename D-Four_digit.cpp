#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(NULL);
    int n;
    cin>>n;
string s=to_string(n);
if(s.size()==1) 
{
cout<<"000"+s<<endl;
}
else if(s.size()==2)
{
cout<<"00"+s<<endl;
}
else if(s.size()==3)
{
cout<<"0"+s<<endl;
}
else cout<<s<<endl;

    return 0;
}