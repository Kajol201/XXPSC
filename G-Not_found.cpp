#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(NULL);
    string s;
    cin>>s;
    map<char,int>mp;
    char p;
    bool flag=false;
    for(int i=0;i<s.size();i++)
    {
    mp[s[i]]++;
    }
    for(int i='a';i<='z';i++)
    {
    if(mp[i]==0) 
    {
    p=i;
    flag=true;
    break;
    }
    }
    if(flag==true) cout<<p<<endl;
    else cout<<"None"<<endl;
    
    
return 0;
}