#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(NULL);
    int a,b,c,p;
    bool flag=false;
    cin>>a>>b>>c;
    int i=1;
    while(true)
    {
    p=c*i;
    if(p>b) break;
    if(p>=a && p<=b)
    {
    flag=true;
    break;
    }
    i++;
    }
    if(flag==true) cout<<p<<endl;
    else cout<<-1<<endl;
    
    
return 0;
}