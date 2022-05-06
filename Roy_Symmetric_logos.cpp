#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s[n];
        for(int i=0;i<n;i++) cin>>s[i];
        bool rowf=true,colf=true;

        /// For rows I am checking it is palindrome or not
        for(int i=0;i<n;i++)
        {
            bool flag=true;
            for(int j=0;j<n/2;j++){
                if(s[i][j] != s[i][n-j-1]){
                    flag=false;
                    break;
                }
            }
            if(!flag){
                rowf=false;
                break;
            }
        }
         /// For columns I am checking it is palindrome or not
        for(int i=0;i<n;i++)
        {
            bool flag=true;
            for(int j=0;j<n/2;j++){
                if(s[j][i] != s[n-j-1][i]){
                    flag=false;
                    break;
                }
            }
            if(!flag){
                colf=false;
                break;
            }
        }

        if(colf && rowf){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }


    }
    return 0;
}
