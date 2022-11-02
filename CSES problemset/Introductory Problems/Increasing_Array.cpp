#include<bits/stdc++.h>
using namespace std;

int main(){

    long long n;
    cin >>  n;

    int arr[n];
    long long count=0;
    for(int j=0;j<n;j++){
        cin >> arr[j];
    }
    for(int i=1;i<n;i++){
        
        if( arr[i]<arr[i-1]){
            count+=arr[i-1]-arr[i];
            arr[i]+=arr[i-1]-arr[i];
        }
        //cout<<count<<endl;
        
    }
    cout<<count;

}