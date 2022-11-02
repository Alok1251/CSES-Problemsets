#include<bits/stdc++.h>
using namespace std;

int main(){

    long long n;
    cin >>  n;

    int arr[n];
    long long sum=0;
    for(int i=0;i<n-1;i++){
        cin >> arr[i];
        sum+=arr[i];
    }
    long long t_sum=n*(n+1)/2;
    
    cout<<t_sum-sum;

}
