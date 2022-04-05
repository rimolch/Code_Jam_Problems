#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test,cas=0;
    cin>>test;
    while(test--)
    {
       int c[3],m[3],y[3],k[3];
       int minic = 1000001,minim=1000001,miniy=1000001,minik=1000001;
       for(int i=0;i<3;i++)
       {
           cin>>c[i]>>m[i]>>y[i]>>k[i];
           minic=min(minic,c[i]);
           minim=min(minim,m[i]);
           miniy=min(miniy,y[i]);
           minik=min(minik,k[i]);
       }
       if((minic+minim+miniy+minik)<1000000)
       {
           cout<<"Case #"<<++cas<<": "<<"IMPOSSIBLE"<<endl;
       }
       else if((minic+minim+miniy+minik)==1000000)
       {
           cout<<"Case #"<<++cas<<": "<<minic<<" "<<minim<<" "<<miniy<<" "<<minik<<endl;
       }
       else
       {
           int ar[4]={0},ic,im,iy,ik;
           ar[0]=minic,ar[1]=minim,ar[2]=miniy,ar[3]=minik;
           ic = -1,im=-1,iy=-1,ik=-1;
           sort(ar,ar+4);
           for(int j=0;j<4;j++)
           {
               if(ar[j]==minic&&ic==-1)
               {
                   ic =j;
               }
               else if(ar[j]==minim&&im==-1)
               {
                   im =j;
               }
               else if(ar[j]==miniy&&iy==-1)
               {
                   iy=j;
               }
               else if(ar[j]==minik&&ik==-1)
               {
                   ik=j;
               }
               else
               {
                   continue;
               }
           }
           int sum[4],p=3;
           sum[0]=ar[0],sum[1]=sum[0]+ar[1],sum[2]=sum[1]+ar[2],sum[3]=ar[3]+sum[2];
           while(sum[p]>1000000)
           {
               if(sum[p]-1000000>ar[p])
               {
                   ar[p]=0;
                   p--;
               }
               else
               {
                   ar[p]=ar[p]-(sum[p]-1000000);
                   p--;
               }
           }
           cout<<"Case #"<<++cas<<": "<<ar[ic]<<" "<<ar[im]<<" "<<ar[iy]<<" "<<ar[ik]<<endl;
       }
    }
    return 0;
}
