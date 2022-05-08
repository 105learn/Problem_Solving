#include<bits/stdc++.h>
using namespace std;
/** a function can't return an array,that's why I use vector.
I can also use struct,but vector is easy to use.
**/
vector<int> leftRotation(int d,int arr[],int n){
    vector<int>result;
    for(int i=d;i<n;i++){
        result.push_back(arr[i]);
    }
    for(int j=0;j<d;j++)
        result.push_back(arr[j]);
    return result;
}

int main()
{
    int n,d;
    cin>>n>>d;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    vector<int>ans = leftRotation(d,arr,n);
    for(auto i: ans){
        cout<<i<<" ";
    }cout<<endl;
    return 0;
}
