#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(NULL);
ll a,t;
cin>>a>>t;
ll i=0,p=a;
while(a<=t)
{
a=p*pow(2,i);
i++;
}
cout<<i-1<<endl;
    
return 0;
}