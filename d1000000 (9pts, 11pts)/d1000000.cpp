#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test,cas=0;
    cin>>test;
    while(test--)
    {
       int n,res=1;
       cin>>n;
       vector<int>v(n);
       for(int i=0;i<n;i++)
       {
         cin>>v[i];
       }
       sort(v.begin(),v.end());
       for(auto it:v)
       {
         if(it>=res)
         {
            res+=1;
         }
       }
       res-=1;
       cout<<"Case #"<<++cas<<":"<<" "<<res<<endl;
    }
    return 0;
}
