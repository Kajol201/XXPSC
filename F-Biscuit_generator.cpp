#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(NULL);
    int a,b,t;
    cin>>a>>b>>t;
    if(a>t)
    {
    cout<<0<<endl;
    }
    else 
    {
    int p=a;
    int cnt=0;
    while(a<=t)
    {
    cnt++;
    a+=p;
    }
    cout<<cnt*b<<endl;
    }
    
return 0;
}