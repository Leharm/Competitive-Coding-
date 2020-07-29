#include<bits/stdc++.h>
#define ll long long
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    string s,t;
    cin>>s>>t;
    int i,j,k,length,m;
    if(s==t)
    {
      cout<<"0"<<endl;
      continue;
    }
    bool flag=true;map<char,set<char> > mp;
    for(i=0;i<n;i++)
    {
      if(s[i]==t[i]) continue;
      else if(s[i]>t[i])
      {
        flag=false;
        break;
      }
      else
      {
        mp[s[i]].insert(t[i]);
      }
    }
    if(flag) 
    {
      length=0;m=0;
      for(auto it=mp.begin();it!=mp.end();it++)
      {
        j=(it->second).size();
        if(j>=2)
        {
          auto it2=(it->second).begin();
          char ch=*it2;
          length++;
          it2++;
          for(;it2!=(it->second).end();it2++)
          {
            mp[ch].insert(*it2);
          }
        }
        else
        length++;
      }
      cout<<length<<endl;
    }
    else 
    cout<<"-1"<<endl;
  }
}
