#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       char a[2][n];
       int ans=0;
       for(int i=0;i<2;i++)
       {
           for(int j=0;j<n;j++)
           {

               cin>>a[i][j];
           }
       }
       for(int i=0;i<2;i++)
       {
           for(int j=1;j<n-1;j++)
           {
               if(i==0)
               {
                   if(a[i][j]=='.'&&a[i][j+1]=='.'&&a[i][j-1]=='.'&&a[i+1][j]=='.'&&a[i+1][j-1]=='x'&&a[i+1][j+1]=='x'){ans++;}
               }
               else
               {
                if(a[i][j]=='.'&&a[i][j+1]=='.'&&a[i][j-1]=='.'&&a[i-1][j]=='.'&&a[i-1][j-1]=='x'&&a[i-1][j+1]=='x'){ans++;}
               }
           }
       }
       cout<<ans<<endl;


    }
}

