#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int siz=s.size();
        bool f=true;
        for(int i=0;i<siz-1;i++)
        {
            cout<<s[i];
            if(s[i]==s[i+1]&&f)
            {
                f=false;
                if(s[i]=='a'){
                    cout<<"b";

                }
                else
                    cout<<"a";
            }


        }
         cout<<s[siz-1];
         if(f){
            if(s[siz-1]=='a')
                cout<<"b";
            else
                cout<<"a";
         }
         cout<<endl;




    }
}
