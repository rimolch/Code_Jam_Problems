#include<bits/stdc++.h>


using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int r,c,cas;
        cin>>r>>c;
        char a1[2*r+1][2*c+1];
        //cout<<"Case #"<<cas+1<<":"<<endl;
        for(int i=0;i<(r*2+1);i++)
        {
            for(int j=0;j<(2*c+1);j++)
            {
                //if((i==0&&j==0)||(i==1&&j==0)||(i==0&&j==1))

                    a1[0][0]='.';
                    a1[0][1]='.';
                    a1[1][0]='.';
                if((i%2!=0)&&(j%2!=0))
                {
                   a1[i][j]='.';
                }
                else if((i%2==0)&&(j%2==0))
                {
                   a1[i][j]='+';
                }
                else if((i%2==0)&&(j%2!=0))
                {
                   a1[i][j]='-';
                }
                else if((i%2!=0)&&(j%2==0))
                {
                   a1[i][j]='|';
                }
            }
         }
         cout<<"Case #"<<++cas<<":"<<endl;
         for(int i=0;i<(2*r+1);i++)
         {
            for(int j=0;j<(2*c+1);j++)
            {
                cout<<a1[i][j];
            }
            cout<<endl;
         }
    }
    return 0;
}
